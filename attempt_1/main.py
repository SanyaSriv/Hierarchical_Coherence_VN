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
            return

        self.parent[root_y] = root_x # will be compressed when find_root is called on it later on

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
        self.stalling = {}
        self.not_stalling = {}
    
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
                        msg2 = self.data[j].strip().split(" ")[1].replace(",", "").replace(" ", "")
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


    def generate_stalling_not_stalling(self, stalling, not_stalling):
        # TODO
        if len(stalling) == 0 or len(not_stalling) == 0:
            # generate the stalling dictionary by running the Murphi code
            pass

        self.stalling = stalling
        self.not_stalling = not_stalling

        

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
    protocol.generate_stalling_not_stalling(meta_data['stalling'], meta_data['not_stalling'])
    protocol.extract_causal_relationships()

    print("Stalling dictionary = ", protocol.stalling)
    print("Not stalling dictionary = ", protocol.not_stalling)
    print("List of all messages = ", protocol.messages)
    print("List of all states = ", protocol.states)

    # Now we start the algorithm
    M_sets = make_sets(protocol.messages, protocol.states, protocol.causal_relationships)
    M_sets.pretty_print() # printing the initial list

if __name__ == "__main__":
    main()
