def extract_messages(data):
    pass

def extract_states(data):
    pass

def make_sets(messages, data, states):
    pass

def get_link_information(data):
    pass

def get_json_information(json_file):
    meta_data = {}
    with open(json_file, 'r') as f:
        meta_data = f.readlines()
    return meta_data

def main():
    # extract the json_file here
    json_file = ""
    
    meta_data = get_json_information(json_file)
    pass

if __name__ == "__main__":
    main()
