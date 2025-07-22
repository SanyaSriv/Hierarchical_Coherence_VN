import json
import argparse
import re

# Disjoint Set Forest data structure here that we will be using
class DisjointSetForest:
    def __init__(self):
        self.parent = {}
        self.elements = []
        self.link_information = {} # contains information about which messages can flow on which links
        self.causal_relationships = {}
    
    def make_set(self, element, link_list=None):
        self.parent[element] = element
        self.elements.append(element)
        self.link_information[element] = link_list
    
    def add_causality(self, causal_relations):
        self.causal_relationships = causal_relations
    
    def find_root(self, element):
        if self.parent[element] != element:
            self.parent[element] = self.find_root(self.parent[element])
        return self.parent[element]
    
    def union(self, x, y):
        """Y will be merged into set X"""
        root_x = self.find_root(x)
        root_y = self.find_root(y)

        if root_x == root_y:
            return 0 # sets were already merged

        self.parent[root_y] = root_x # will be compressed when find_root is called on it later on
        return 1 # some change was made

    def get_set_elements(self, element):
        """
        Given an element, returns the list of all elements in its set.
        """
        root = self.find_root(element)
        same_set = [e for e in self.elements if self.find_root(e) == root]
        return same_set
    
    def pretty_print(self):
        root_sets = {}
        for i in self.elements:
            root_set = self.find_root(i)
            if root_set in root_sets:
                root_sets[root_set].append(i)
            else:
                root_sets[root_set] = [i]

        counter = 0
        for i in root_sets:
            print("Set", counter, ":", ([i] + root_sets[i]) if [i] != root_sets[i] else ([i]))
            counter += 1

class Protocol:
    def __init__(self, murphi_file):
        self.murphi = murphi_file
        with open(self.murphi, 'r') as f:
            self.data = f.readlines()
        self.states = []
        self.messages = []
        self.causal_relationships = {}
        self.not_processable = {}
        self.processable = {}
    
    def extract_messages(self):
        """
        Function to exatract the list of messages from the Murphi file. 
        """
        for i in range(0, len(self.data)):
            if "MessageType:" in self.data[i]:
                for j in range(i+1, len(self.data)):
                    if "};" in self.data[j]:
                        break
                    self.messages.append(self.data[j].strip().replace(" ", "").replace(",", ""))

    def extract_states(self):
        """
        Function to extract the list of states from the Murphi file.
        """
        state_decl = r"\s*.*(cache|directory).*:\s*enum\s*{\s*"
        for i in range(0, len(self.data)):
            if re.fullmatch(state_decl, self.data[i]) is not None:
                print(self.data[i])
                for j in range(i+1, len(self.data)):
                    if "};" in self.data[j]:
                        break
                    self.states.append(self.data[j].strip().replace(" ", "").replace(",", ""))

    def extract_causal_relationships(self):
        """
        Function to extract causal relationships between message types (not classes)
        """
        # send_msg_re = r'\s*Send_.*\(.*?\);\s*'
        # case_re = r'\s*case\s*(.*?):\s*'
        for i in range(0, len(self.data)):
            if re.match("\s*msg :=.*", self.data[i]):
                # found an instance where a message is sent
                msg1 = self.data[i].split(',')[1].strip()
                for j in range(i, 0, -1):
                    if "case" in self.data[j]:
                        msg2 = self.data[j].strip().split(" ")[1].replace(",", "").replace(" ", "").replace(":", "")
                        if msg2 in self.causal_relationships:
                            if msg1 not in self.causal_relationships[msg2]:
                                self.causal_relationships[msg2].append(msg1)
                        else:
                            self.causal_relationships[msg2] = [msg1]
                        break
                    if "procedure" in self.data[j]:
                        # this means the message was not sent because another message caused it - but because of
                        # an operation like a load or a store
                        # not doing anything special for this case - for now
                        break
        print("causal relationships", self.causal_relationships)


    def generate_not_processable_processable(self, not_processable, processable):
        # TODO
        if len(not_processable) == 0:
            pass
        else:
            self.not_processable = not_processable

        if len(processable) == 0:
            find_state_case = r'\s*case\s*(.*?):\s*'
            for i in range(0, len(self.data)):
                state_match = re.match(find_state_case, self.data[i])
                if state_match:
                    state_name = state_match.group(1)
                    if state_name in self.states:
                        self.processable[state_name] = []
                        # proceed to find which messages can this state process
                        for j in range(i+1, len(self.data)):
                            if "endswitch" in self.data[j]:
                                break
                            if "case" in self.data[j]:
                                self.processable[state_name].append(self.data[j].strip().split(" ")[1].replace(":", "").replace(" ", ""))
        else:
            self.processable = processable      
        

def make_sets(messages, states, causal_relationships):
    """
    Will start the algorithm by building the states.
    messages = list of all the message types in the protocol (not the message classes)
    states = list of all the states in the protocol
    causal_relationships = dictionary that maps which message type can cause another message type
    """
    M_Sets = DisjointSetForest()
    for msg in messages:
        M_Sets.make_set(msg)
    M_Sets.add_causality(causal_relationships) # add the causal relationships between messages

    return M_Sets

def merge_sets(M_sets, protocol, waiting_dictionary={}):
    """
    Function responsible for merging the sets such that all the invariants are respected
    """

    # keep merging till changes are being made
    change_made = 1 # starting with 1 so we can do the initial loop
    while change_made:
        change_made = 0
        for msg1 in protocol.messages:
            for msg2 in protocol.messages:
                if msg1 != msg2:
                    # TODO: you not only need ot check for these elements - but also for all the elements of the sets i and j are a part of
                    
                    # get the set of messages in which msg1 is placed
                    set_msg1 = M_sets.get_set_elements(msg1)
                    # get the set of messages in which msg2 is placed
                    set_msg2 = M_sets.get_set_elements(msg2)
                    if set_msg1 == set_msg2:
                        continue
                    print("The sets we are going to compare are: ", set_msg1, set_msg2)
                    no_conflicts_var = 1 # 1 if there are no conflicts and 0 otherwise
                    
                    for i in set_msg1:
                        for j in set_msg2:
                            # invariant 1: we can merge two states that there exists two states s and s', such that one message is processed by s and the other is processed by s'
                            s1 = any(i in protocol.processable[p] for p in protocol.processable)
                            s2 = any(j in protocol.processable[p] for p in protocol.processable)
                            
                            # invariant 2 (part 1):
                            # if i is processable, then it is not possible for j to be in some state's not_processable list
                            s3 = any(i in protocol.processable[p] for p in protocol.processable)
                            s4 = any(j in protocol.not_processable[p] for p in protocol.not_processable)
                            
                            # invariant 2 (part 2): 
                            # if j is processable, then it is not possible for i to be in some state's processable list
                            s5 = any(i in protocol.not_processable[p] for p in protocol.not_processable)
                            s6 = any(j in protocol.processable[p] for p in protocol.processable)

                            conflict = (s3 and s4) or (s5 and s6)
                            if conflict:
                                # true conflict condition: if we have a conflict but there is no edge in the waits-for graph, the it should be safe to merge
                                if (j not in waiting_dictionary[i]) and (i not in waiting_dictionary[j]):
                                    print("There is no real conflict between:", i, j)
                                    conflict = 0

                            no_conflicts_var = no_conflicts_var and ((s1 and s2) and (not conflict))
                    
                            # TODO: add the causality invariant to avoid deadlocks between VNs - avoiding that for now

                            # # another condition can be true - two elements are not processable, but they are not processable by the same state
                            # # I need to investigate further why we want this to be true
                            # s1 = [p for p in protocol.not_processable if i in protocol.not_processable[p]]
                            # s2 = [p for p in protocol.not_processable if j in protocol.not_processable[p]]

                    # if at the end we did not find ay conflicts, then we are ready to merge
                    if no_conflicts_var:
                        change_made = change_made or M_sets.union(msg1, msg2) # typically here, we will take causality into account to see if we should merge x into y or y into x
                    
                    # if s1 == s2:
                    #     change_made |= M_sets.union(i, j)

def get_link_information(data):
    pass

def get_json_information(json_file):
    meta_data = {}
    with open(json_file, 'r') as f:
        meta_data = json.load(f)
    return meta_data

def main():
    # extract the json_file here
    parser = argparse.ArgumentParser()
    parser.add_argument("json_file", help="Path to the input JSON file")
    args = parser.parse_args()
    meta_data = get_json_information(args.json_file)
    protocol = Protocol(meta_data['coherence_protocol'])

    # extract the states, messages, and causal relationships from the Murphi model
    protocol.extract_messages()
    protocol.extract_states()

    for i in protocol.messages:
        if i not in meta_data['waiting_dictionary']:
            meta_data['waiting_dictionary'][i] = []

    protocol.generate_not_processable_processable(meta_data['not_processable'], meta_data['processable'])
    protocol.extract_causal_relationships()

    print("Not processable dictionary = ", protocol.not_processable)
    print("Processable dictionary = ", protocol.processable)
    print("List of all messages = ", protocol.messages)
    print("List of all states = ", protocol.states)
    print("Causal relationships = ", protocol.causal_relationships)

    # Now we start the algorithm
    print("-----------------------START ALGORITHM------------------------")
    print("*** Printing initial sets ***")
    M_sets = make_sets(protocol.messages, protocol.states, protocol.causal_relationships)
    M_sets.pretty_print() # printing the initial list

    print("*** Printing merged sets ***")
    merge_sets(M_sets, protocol, meta_data['waiting_dictionary'])
    M_sets.pretty_print() 

if __name__ == "__main__":
    main()
