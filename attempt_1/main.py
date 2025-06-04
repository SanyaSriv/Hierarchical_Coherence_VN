import json
import argparse
import re

# Disjoint Set Forest data structure here that we will be using
class DisjointSetForest:
    def __init__(self):
        self.parent = {}
        self.elements = []
    
    def make_set(self, element):
        self.parent[element] = element
        self.elements.append(element)
    
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

def generate_stalling_not_stalling(murphi_file):
    # TODO
    stalling = {}
    not_stalling = {}
    return [stalling, not_stalling]

def extract_messages(data):
    """
    Data = contents of the Murphi file
    Function to exatract the list of messages from the Murphi file. 
    """
    message_types = []
    for i in range(0, len(data)):
        if "MessageType:" in data[i]:
            for j in range(i+1, len(data)):
                if "};" in data[j]:
                    break
                message_types.append(data[j].strip().replace(" ", "").replace(",", ""))
    return message_types

def extract_states(data):
    """
    Data = contents of the Muprhi file
    Function to extract the list of states from the Murphi file.
    """
    states = []
    state_decl = r"\s*.*(cache|directory).*:\s*enum\s*{\s*"
    for i in range(0, len(data)):
        if re.fullmatch(state_decl, data[i]) is not None:
            print(data[i])
            for j in range(i+1, len(data)):
                if "};" in data[j]:
                    break
                states.append(data[j].strip().replace(" ", "").replace(",", ""))
    return states

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
    stalling = {}
    not_stalling = {}
    messages = []
    states = []

    meta_data = get_json_information(args.json_file)
    if len(meta_data['stalling']) == 0 or len(meta_data['not_stalling'] == 0):
        # generate the stalling dictionary by running the Murphi code
        result = generate_stalling_not_stalling(meta_data['coherence_protocol'])
        stalling = result[0]
        not_stalling = result[1]

    with open(meta_data['coherence_protocol'], 'r') as f:
        murphi_data = f.readlines()

    # extract the states and messages from the Murphi model
    messages = extract_messages(murphi_data)
    states = extract_states(murphi_data)

    print("Stalling dictionary = ", stalling)
    print("Not stalling dictionary = ", not_stalling)
    print("List of all messages = ", messages)
    print("List of all states = ", states)

    # Now we start the algorithm
    causal_relationships = [] # initializing this to an empty list for testing
    M_sets = make_sets(messages, states, causal_relationships)
    M_sets.pretty_print() # printing the initial list

if __name__ == "__main__":
    main()
