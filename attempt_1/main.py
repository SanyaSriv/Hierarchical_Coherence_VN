import json
import argparse
import re

def generate_stalling_not_stalling(murphi_file):
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

def make_sets(messages, data, states):
    pass

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

    # extract the states

    # extract the messages
    messages = extract_messages(murphi_data)
    states = extract_states(murphi_data)

    print("Stalling dictionary = ", stalling)
    print("Not stalling dictionary = ", not_stalling)
    print("List of all messages = ", messages)
    print("List of all states = ", states)

if __name__ == "__main__":
    main()
