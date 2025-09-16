#!/usr/bin/env python3
import json
import argparse
from pathlib import Path
import re
import networkx as nx
import matplotlib.pyplot as plt

def load_json(path: Path) -> dict:
    with open(path) as f:
        return json.load(f)

def build_graph_from_linkstructure(data: dict) -> nx.Graph:
    G = nx.Graph()
    # Add nodes if provided (optional)
    for n in data.get("Nodes", []):
        G.add_node(n)
    # Add edges from LinkStructure
    for src, nbrs in (data.get("LinkStructure") or {}).items():
        for dst in nbrs:
            if src != dst:
                G.add_edge(src, dst)
    return G

def draw_graph(G: nx.Graph, out_path: Path):
    if len(G) == 0:
        raise SystemExit("Graph is empty: no nodes/links from LinkStructure.")
    pos = nx.spring_layout(G, seed=42)
    plt.figure(figsize=(8, 6))
    nx.draw_networkx_edges(G, pos)
    nx.draw_networkx_nodes(G, pos, node_size=1200)
    nx.draw_networkx_labels(G, pos, font_size=10)
    plt.axis("off")
    plt.tight_layout()
    plt.savefig(out_path, dpi=200, bbox_inches="tight")
    plt.close()

def clean_state_data(dictionary):
    """
    Function to generate node abstractions from state names that just indicate the node category.
    """
    cleaned_dictionary = {}
    for i in dictionary:
        cleaned_dictionary[i] = []
        for state in dictionary[i]:
            if "cacheL1_1" in state:
                if "CacheL1_1_1" not in cleaned_dictionary[i]:
                    cleaned_dictionary[i].append("CacheL1_1_1")
                if "CacheL1_1_2" not in cleaned_dictionary[i]:
                    cleaned_dictionary[i].append("CacheL1_1_2")
            elif "cacheL1_2" in state:
                if "CacheL1_2_1" not in cleaned_dictionary[i]:
                    cleaned_dictionary[i].append("CacheL1_2_1")
                if "CacheL1_2_2" not in cleaned_dictionary[i]:
                    cleaned_dictionary[i].append("CacheL1_2_2")
            elif "directoryL1_1" in state:
                if "DirectoryL1_1" not in cleaned_dictionary[i]:
                    cleaned_dictionary[i].append("DirectoryL1_1")
            elif "directoryL1_2" in state:
                if "DirectoryL1_2" not in cleaned_dictionary[i]:
                    cleaned_dictionary[i].append("DirectoryL1_2")
            elif "directoryL2" in state:
                if "DirectoryL2" not in cleaned_dictionary[i]:
                    cleaned_dictionary[i].append("DirectoryL2")
    return cleaned_dictionary

def establish_communication_patterns(data):
    """
    Function to generate communication patterns. This function takes the Muprhi file as the input,
    and generates mapping regarding the possible sources and destinations for each message type.
    """
    #step 1: get the list of messages
    originating_dictionary = {}
    finishing_dictionary = {}
    # step 2:
    # first figure out, which nodes could a message get originated from
    for i in range(0, len(data)):
        if re.match("\s*msg :=.*", data[i]):
            if len(data[i].split(',')) < 2:
                continue;
            msg1 = data[i].split(',')[1].strip()
            for j in range(i, 0, -1):
                if "switch inmsg.mtype" in data[j]:
                    for z in range(j-1, 0, -1):
                        if "case" in data[z]:
                            state = data[z].strip().split(' ')[1].replace(":", "")
                            if msg1 not in originating_dictionary:
                                originating_dictionary[msg1] = [state]
                            else:
                                originating_dictionary[msg1].append(state)
                            break
                    break
    print(originating_dictionary)
    cleaned_originating_dict = clean_state_data(originating_dictionary)
    print(cleaned_originating_dict)
    # figuring out which nodes can the message be sent to/processed at
    for i in range(0, len(data)):
        if re.match("\s*case .*", data[i]):
            if len(data[i].strip().split(' ')) < 2:
                continue
            msg1 = data[i].strip().split(' ')[1].strip().replace(":", "")
            if msg1 not in originating_dictionary:
                # we found a case state name and not a message name
                continue
            for j in range(i+1, len(data)):
                if "cbe.State" in data[j]:
                    state = data[j].strip().split(':=')[1].replace(";", "").strip()
                    if msg1 not in finishing_dictionary:
                        finishing_dictionary[msg1] = [state]
                    else:
                        finishing_dictionary[msg1].append(state)
                    break
                if "case" in data[j]:
                    print("Could not find the procesor for this message")
                    exit()
                    break
    print("Finishing dictionary = ", finishing_dictionary)
    cleaned_finishing_dict = clean_state_data(finishing_dictionary)
    print(cleaned_finishing_dict)
    return [cleaned_originating_dict, cleaned_finishing_dict]

def all_paths(graph, src, dst, path=None, visited=None):
    """
    Function to find all possible paths from a source to a destination node. 
    """
    if path is None:
        path = [src]
    if visited is None:
        visited = {src}

    # If we reached the destination, return this path
    if src == dst:
        return [path]

    paths = []
    for neighbor in graph.get(src, []):
        if neighbor not in visited:
            new_paths = all_paths(
                graph,
                neighbor,
                dst,
                path + [neighbor],
                visited | {neighbor}
            )
            paths.extend(new_paths)

    return paths

def make_links(graph):
    """
    Function to assign a unique link for every connection in the graph.
    """
    global_number = 0
    link_dict = {}
    for i in graph:
        for j in graph[i]:
            if (i, j) in link_dict:
                continue
            else:
                link_dict[(i, j)] = "l{}".format(global_number)
                global_number += 1
    return link_dict


def get_possible_paths_from_src_to_dest(graph, node_definition, originating_dictionary, processing_dictionary):
    """
    The finishing dictionary has been referred to as the processing dictionary here.
    """
    paths_dictionary = {}
    msg_paths = {}
    for msg in originating_dictionary:
        possible_source = originating_dictionary[msg]
        possible_destination = processing_dictionary[msg]
        combinations = []
        # make all possible combinations
        for s in possible_source:
            for d in possible_destination:
                if s != d:
                    # (s, d) is a possible source and destination pair
                    s_nid = node_definition[s]
                    d_nid = node_definition[d]
                    if ((s_nid, d_nid) not in paths_dictionary):
                        path = all_paths(graph, s_nid, d_nid, None, None)
                        paths_dictionary[(s_nid, d_nid)] = path
                        combinations += path
                    else:
                        combinations += paths_dictionary[(s_nid, d_nid)]
        msg_paths[msg] = combinations
    
    print("The message paths are: ", msg_paths)

    # now, let's convert them into links and print out the link information
    links = make_links(graph)
    msg_links = {}
    for msg in msg_paths:
        msg_links[msg] = []
        for p in msg_paths[msg]:
            for nodes in range(0, len(p)-1):
                msg_links[msg].append(links[(p[nodes], p[nodes+1])])
    print(msg_links)
    return msg_links


def main():
    ap = argparse.ArgumentParser(description="Draw a graph from LinkStructure in a topology JSON.")
    ap.add_argument("json_file", help="Path to the input JSON")
    ap.add_argument("-o", "--out", help="Output PNG filename (default: <json_basename>.png)")
    args = ap.parse_args()

    in_path = Path(args.json_file)
    out_path = Path(args.out) if args.out else in_path.with_suffix(".png")

    data = load_json(in_path)
    file = data['File']
    link_information = {}
    with open(file, 'r') as f:
        file_data = f.readlines()
        result = establish_communication_patterns(file_data)
        link_information = get_possible_paths_from_src_to_dest(data['LinkStructure'], data['Node_definition'], result[0], result[1])

    print("Link information: ", link_information)
    with open("topology_out_{}.json".format(data['File'].split(".")[0]), "w") as f:
        json.dump(link_information, f, indent=4)
    G = build_graph_from_linkstructure(data)
    draw_graph(G, out_path)
    print(f"Wrote {out_path}")

if __name__ == "__main__":
    main()
