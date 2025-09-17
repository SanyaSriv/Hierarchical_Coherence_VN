"""
Code to generate the number of VCs required for each VN,
depending upon the topology, once we have the VN information
after running the stage2_main file.
"""

from tabulate import tabulate
import argparse
import json
import math

# have some kind of formula encoded here about
# the number of VCs that we would need
# for each VN

class Topology:
    def __init__(self, name, dimensions):
        self.name = name
        self.dimensions = dimensions
    

def get_number_VC(topology, causal_chain):
    """
    This function returns the number of VCs needed based upon the topology and the length
    of the causal chain. We have hardcoded the formulae for now. This can be made more
    specific later on.
    """

    if topology.name == "Uni-directional Ring":
        return str(causal_chain + 1)
    elif topology.name == "Bi-directional Ring":
        return str(causal_chain + 1)
    elif topology.name == "Mesh":
        # we need to split this per direction for the first and last dimension
        composition = ""
        dimension_0_negative = "Dimension -(0): {}\n".format(causal_chain - (math.floor(causal_chain/2)))
        dimension_0_positive = "Dimension +(0): {}\n".format(causal_chain)
        dimension_n_1_negative = "Dimension -({}): {}\n".format(topology.dimensions-1, (causal_chain - (math.ceil(causal_chain/2))))
        dimension_n_1_positive = "Dimension +({}): {}\n".format(topology.dimensions-1, causal_chain)
        mid_dimensions = ""
        for i in range(1, topology.dimensions-1):
            mid_dimensions += "Dimension {}: {}\n".format(i, causal_chain)
        composition += dimension_0_negative + dimension_0_positive + \
                       mid_dimensions + \
                       dimension_n_1_negative + dimension_n_1_positive
        return composition
    elif topology.name == "Torus":
        # we need to split this per dimension
        composition = ""
        dimension_0 = "Dimension 0: {}\n".format(2*causal_chain - (math.floor(causal_chain/2)))
        dimension_n_1 = "Dimension {}: {}\n".format(topology.dimensions-1, 2*causal_chain - (math.ceil(causal_chain/2)))
        mid_dimensions = ""
        for i in range(1, topology.dimensions-1):
            mid_dimensions += "Dimension {}: {}\n".format(i, 2 * causal_chain)
        composition += dimension_0 + mid_dimensions + dimension_n_1
        return composition
    else:
        raise Exception("Uknown topology has been found")


def get_json_information(json_file):
    meta_data = {}
    with open(json_file, 'r') as f:
        meta_data = json.load(f)
    return meta_data

def extract_data():
    pass

def generate_tables(data):
    headers = ["VN ID", "Number of Messages in VN", 
           "Longest length of causal dependency",
           "Number of VCs"]
    print(tabulate(data, headers=headers, tablefmt="fancy_grid"))

def main():
    # extract the data
    parser = argparse.ArgumentParser()
    parser.add_argument("json_file", help="Path to the input JSON file")
    args = parser.parse_args()
    meta_data = get_json_information(args.json_file)
    for i in meta_data["Topology"]:
        data = []
        topology = Topology(i, meta_data["Topology"][i]["dimensions"])
        print("Topology name:", i)
        print("Message class separation:", meta_data["Topology"][i]["msg_class_separation"])
        print("Hierarchical message interleaving:", meta_data["Topology"][i]["hierarchy_interleaving"])
        causal_chain_length = meta_data["Topology"][i]["causal_chain_length"]
        number_of_VNs = meta_data["Topology"][i]["num_VN"]
        msg_VN = meta_data["Topology"][i]["msg_VN"]
        for vn in msg_VN:
            num_messages = len(msg_VN[vn])
            causal_messages = causal_chain_length[vn]
            vc_number = get_number_VC(topology, causal_messages)
            actual_messages = msg_VN[vn]
            compound_info = str(num_messages) + "\n" + str(actual_messages)
            data.append([vn, compound_info, causal_messages, vc_number])
        
        generate_tables(data)

if __name__ == "__main__":
    main()

# this should be present in the JSON file and should be added by stage2_main.py
# print information about these sets:
# for i in all possible topologies, we want to explore:
        # when we allow different message classes to be in different sets
        # + when we allow the cluster and global messages to be interleaved

        # when we necessarily put the same message class in the same set
        # + when we allow the cluster and global messages to be interleaved

        # when we allow different message classes to be in different sets
        # + when we DO NOT allow the cluster and global messages to be interleaved

        # when we necessarily put the same message class in the same set
        # + when we DO NOT allow the cluster and global messages to be interleaved
