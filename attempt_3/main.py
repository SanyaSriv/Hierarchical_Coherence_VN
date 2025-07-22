import argparse
import os
import subprocess
import networkx as nx
import matplotlib.pyplot as plt
import plotly.graph_objects as go
import re
import sys
import json
import itertools

def collect_useful_results(data):
    useful_data = []
    for line in data:
        if "SS_PRINT" in line:
            useful_data.append(line)
    return useful_data

def run_murphi_code(file_path):
    results = ""
    
    file_path = file_path.split(".m")[0]
    
    # TODO (SanyaSriv): Uncomment the block below beore commiting the final code, this has been commented only for testing
    # cmd = f"""
    # make && 
    # ./{file_path} > {file_path}_output.txt"""
    # subprocess.run(cmd, shell=True,
    #                stdout=subprocess.DEVNULL,
    #                stderr=subprocess.DEVNULL)
    with open("{}_output.txt".format(file_path), 'r') as f:
        results = f.readlines()
    useful_data = collect_useful_results(results)
    return useful_data

def collect_no_stall_data(file_path):
    """
    This function scans the Murphi code to see which messages lead to no-stalling or some kind of an action.
    """
    NoStall_dictionary = {}
    data = []
    with open(file_path, "r") as f:
        data = f.readlines()
    
    for i in range(0, len(data)-1):
        if "case" in data[i] and "SS_PRINT" in data[i + 1]:
            # we found the place where we inserted our put
            state = data[i].split(" ")[-1].strip().replace(" ", "").replace(":", "")
            # print("state = ", state)
            NoStall_dictionary[state] = set()
            temp_var = i + 1
            while True:
                if "case" in data[temp_var]:
                    # print(data[temp_var])
                    msg = data[temp_var].split(" ")[-1].strip().replace(" ", "").replace(":", "")
                    NoStall_dictionary[state].add(msg)
                if "endswitch" in data[temp_var]:
                    break 
                temp_var += 1
    print("The NoStalls dictionary looks as follows: ")
    print(NoStall_dictionary)
    return NoStall_dictionary

def collect_arriving_data(data):
    arriving_msg_dictionary = {}
    for i in data:
        split_line = i.split(" ")
        split_line = list(filter(lambda x: x != '', split_line))
        # print("split line = ", split_line)
        case = split_line[-1].strip().replace(" ", "")
        msg = split_line[-3].strip().replace(" ", "")
        # print(case, msg)

        if case in arriving_msg_dictionary:
            arriving_msg_dictionary[case].add(msg)
        else:
            arriving_msg_dictionary[case] = set()
            arriving_msg_dictionary[case].add(msg)
    print("the arriving dictionary looks as follows:\n\n")
    print(arriving_msg_dictionary)
    return arriving_msg_dictionary

def collect_stall_data(no_stall, arriving):
    stall = {}
    for i in no_stall:
        stall[i] = set()
        if i in arriving:
            for msg in arriving[i]:
                if msg not in no_stall[i]:
                    stall[i].add(msg)

    return stall

def generate_png_data(stall_dictionary, file_name):
    # G = nx.DiGraph()
    # for state, messages in stall_dictionary.items():
    #     G.add_node(state)
    #     for msg in messages:
    #         G.add_node(msg)
    #         G.add_edge(msg, state)
    # plt.figure(figsize=(15, 10))  # Set figure size
    # pos = nx.spring_layout(G, k=0.5)  # Generate layout for nodes
    # nx.draw(G, pos, with_labels=True, node_size=3000, node_color="lightblue", font_size=8, edge_color="gray", arrowsize=10)

    # # Save the graph as a PNG file
    # plt.savefig(file_name, dpi=300, bbox_inches="tight")
    # Create a directed graph
    G = nx.DiGraph()

    # Add edges (from messages to states)
    state_nodes = set(stall_dictionary.keys())  # Nodes that are dictionary keys
    message_nodes = set()  # Nodes that are dictionary values

    for state, messages in stall_dictionary.items():
        G.add_node(state)  # Add state node
        for msg in messages:
            G.add_node(msg)  # Add message node
            G.add_edge(msg, state)  # Edge from message to state
            message_nodes.add(msg)  # Track message nodes separately

    # Use a force-directed layout with more spacing
    pos = nx.spring_layout(G, k=1.2, seed=42)  # Increase k for better spacing

    # Extract edge positions
    edge_x = []
    edge_y = []
    for edge in G.edges():
        x0, y0 = pos[edge[0]]
        x1, y1 = pos[edge[1]]
        edge_x.extend([x0, x1, None])  # None for disconnected edges
        edge_y.extend([y0, y1, None])

    # Extract node positions and labels
    node_x = [pos[node][0] for node in G.nodes()]
    node_y = [pos[node][1] for node in G.nodes()]
    node_text = list(G.nodes())

    # Set node sizes dynamically (based on connections)
    node_size = [8 + len(G.edges(node)) * 2 for node in G.nodes()]

    # Assign colors: red for states, blue for messages
    node_color = ["red" if node in state_nodes else "blue" for node in G.nodes()]

    # Create edges in Plotly
    edge_trace = go.Scatter(
        x=edge_x, y=edge_y,
        line=dict(width=0.7, color="gray"),
        hoverinfo="none",
        mode="lines"
    )

    # Create nodes in Plotly
    node_trace = go.Scatter(
        x=node_x, y=node_y,
        mode="markers",
        text=node_text,
        textposition="top left",
        marker=dict(
            size=node_size,
            color=node_color,
            line=dict(width=1, color="black")
        ),
        hoverinfo="text"
    )

    # Create interactive figure
    fig = go.Figure(data=[edge_trace, node_trace])
    fig.update_layout(
        title="Interactive Cache Coherence Graph",
        showlegend=False,
        hovermode="closest",
        margin=dict(b=0, l=0, r=0, t=40),
        xaxis=dict(showgrid=False, zeroline=False, showticklabels=False),
        yaxis=dict(showgrid=False, zeroline=False, showticklabels=False)
    )

    # Save as an interactive HTML file
    fig.write_html(file_name)
    print(f"Interactive graph saved as {file_name}")

def find_sender(state):
    if "directoryL2" in state:
        return "directoryL2"
    if "directoryL1_1" in state:
        return "directoryL1_1"
    if "directoryL1_2" in state:
        return "directoryL1_2"
    if "cacheL1_1" in state:
        return "cacheL1_1"
    if "cacheL1_2" in state:
        return "cacheL1_2"          

def find_CauseMsg(state, full_text):
    full_text_temp = full_text
    
    breaky = 0 # if this is set then we break
    state_to_return = []
    for i in range(0, len(full_text_temp)-1):
        TargetState = ("State := " + "%s") % (state)
        breaky = 0
        if TargetState in full_text_temp[i]:    
            # print("TargetState = ",  full_text_temp[i])
            for j in range(i, -1, -1):
                if "case" in full_text_temp[j] or "procedure" in full_text_temp[j]:
                    break
                if re.match("\s*msg :=.*", full_text_temp[j]):
                    # please check that this does not come from a procedure ----> added by Sanya - still in progress
                    temp = j
                    for tempy in range(j, -1, -1):
                        if "case" in full_text_temp[tempy]:
                            break
                        # elif "procedure" in full_text_temp[tempy]:
                        #     # print("this is true that this message was found from a procedure")
                        #     breaky = 1 # we cannot return in here, we still need to search the rest of the code
                    if breaky == 1:
                        break
                    msg = full_text_temp[j].split(',', 1)[1].split(',', 1)[0].strip()
                    cause_msg_sender = find_sender(state)
                    state_to_return.append([msg, cause_msg_sender])
    # print("Finding the causal message in here: ", [msg, cause_msg_sender], j, full_text_temp[j])
                   
    print("The cause message that led to the stalled state: ", state_to_return)               
    return state_to_return

def CauseSeq_build(full_text, cause_msg, already_explored): 
    cause_sequence = []
    for msg in cause_msg:
        # key = f"{msg[0]}____{msg[1]}"
        newpy = []
        print(f"***************************************************************{msg[0]} | {msg[1]}***********************************************")
        # if key in already_explored:
        #     newpy = already_explored[key]
        # else:
        newpy = CauseSeq_dfs(full_text, msg, newpy, [])
            # already_explored[key] = newpy
        for i in newpy:
            cause_sequence.append(i)
    return cause_sequence, already_explored


def get_msg_processor(line, number, text):
    for i in range(number+1, len(text) - 1):
        if "cbe.State :=" in text[i]:
            print("text[i] = ", text[i])
            processor = text[i].strip().replace(" ", "").replace(";", "").split(":=")[1]
            processor = processor.replace(" ", "")
            # print("the processor is = ", processor)
            return find_sender(processor)
        elif "return" in text[i]:
            break
    return None

# Sanya - changes to be made --> I talked with Prof Sorin, and apparently some
# messages like an invalidation can be sent across both directories.
# But a core from cluster 1 should not be sending a message to another core in cluster 2.
# similarly, a message from a core in cluster 2 should not be sending a message to another core in cluster 1.

def get_neighbors(msg, full_text):
    # function to get the list of messages propagated by a certain message name
    neighbors = []
    case_msg = ("case " + "%s" + ":") % (msg[0])
    for i in range(0, len(full_text) - 1):
        if case_msg not in full_text[i]:
            continue
        found = 0
        for j in range(i+1, len(full_text)-1):
            next_line = full_text[j]
            if (("return" in next_line) or ("case" in next_line)):
                # this message does not propagate any other message - the chain ends here
                if found == 0:
                    neighbors.append(["None", "None"])
                break
            if re.match("\s*msg :=.*", next_line):
                found = 1
                processor = get_msg_processor(next_line, j, full_text)
                msg_next = [next_line.split(',', 1)[1].split(',', 1)[0].strip(), processor]
                if cluster_directory_communication(processor, msg[1]):
                    neighbors.append(msg_next)
        return neighbors

def CauseSeq_dfs(full_text, msg, cause_sequence, already_explored):
    
    already_explored.append(msg[0])
    print("inside the case sequence dfs", msg[0])
    propagated_messages = get_neighbors(msg, full_text)
    cause_sequence.append(msg)
    for neighbor in propagated_messages:
        if neighbor[0] in already_explored:
            continue
        if neighbor[0] == "None":
            continue # just indicates that this was the last message in the chain

        # otherwise, we can explore this neighbor
        neighbors_neighbor = get_neighbors(neighbor, full_text)
        incorrect_path = all(n in already_explored for n in neighbors_neighbor)
        
        # if every path that this node leads to is incorrect, then we should not be exploring it
        if incorrect_path and neighbors_neighbor:
            continue
        cause_sequence = CauseSeq_dfs(full_text, neighbor, cause_sequence, already_explored)
    
    already_explored.pop()
    return cause_sequence

    # for i in range(0, len(full_text)-1):
    #     if case_msg not in full_text[i]:
    #         continue
    #     for j in range(i+1, len(full_text)-1):
    #         next_line = full_text[j]
    #         if (("return" in next_line) or ("case" in next_line)):
    #             # this message does not propagate any other message - the chain ends here
    #             break

    #         if re.match("\s*msg :=.*", next_line):
    #             processor = get_msg_processor(next_line, j, full_text)
    #             msg_next = [next_line.split(',', 1)[1].split(',', 1)[0].strip(), processor]
    #             if cluster_directory_communication(processor, msg[1]) and msg_next[0] not in already_explored:
    #                 # we can start exploring this but only if it has something valid and does not lead to a cycle
    #                 print(next_line, j)
    #                 print(msg[1], processor, " | ", msg[0], msg_next[0])
    #                 cause_sequence.append(msg_next)
    #                 end_tag = False

    # if msg_next is not None:
    #                     cause_sequence = CauseSeq_dfs(full_text, msg_next, cause_sequence, already_explored)
    #                 break

global_causes = {}

# Adding it for now --> the directories of the clusters should not be directly communicating with each other?
def cluster_directory_communication(proc1, proc2):
    # Sanya --> maybe remove this? this communication could be possible between the directories
    # if proc1 == "directoryL1_1" and proc2 == "directoryL1_2":
    #     return False
    # if proc1 == "directoryL1_2" and proc2 == "directoryL1_1":
    #     return False
    
    # just to see the results if we only have 1 L2 directory
    if proc1 == "directoryL2" and proc2 == "directoryL2":
        return False
    
    # directories should not be sending messages to themselves
    if proc1 == "directoryL1_1" and proc2 == "directoryL1_1":
        return False
    if proc1 == "directoryL1_2" and proc2 == "directoryL1_2":
        return False
    
    # a cluster core should not be directly communicating with the other cluster's core
    if proc1 == "cacheL1_1" and proc2 == "cacheL1_2":
        return False
    if proc1 == "cacheL1_2" and proc2 == "cacheL1_1":
        return False
    
    return True

def extract_waits_for_relationship(StallDictionary, AllMessagesPossible, NoStall_dictionary, data):
    # step 1 = iterate over the waits dictionary. 
    # step 2 - find a message that stalls at a state s. Let that message be m and that state be s. 
    #           Determine what message would have caused state s. Let that be m'
    #           build the causal dependency chain from that point
    #           if you find a state change in the same directory/node such that after that state change, 
    #           the stalled message can be processed, stop. Now the set of messages between the one that caused the first state change and
    #           including the one that caused the last state change, have a conflict with the stalled message. 
    #           So do not schedule them in the same VN.
    cause_sequence = []
    waits_dictionary = {}
    everything_explored = []
    # step 1 = iterate over the waits dictionary. 
    for state in StallDictionary: # state = [list of messages]
        cause_msg = []
        # traverse all states which have the stalling messages
        print(StallDictionary[state], state)
        if (len(StallDictionary[state]) != 0):
            print("The target state is: ", state)
            cause_msg = find_CauseMsg(state, data)
            # step 3 - finding what messages are caused by the messages in the cause_msg list
            cause_sequence, already_explored = CauseSeq_build(data, cause_msg, everything_explored)
            cause_unique = []
            for uniq in cause_sequence:
                if uniq not in cause_unique:
                    cause_unique.append(uniq)
            cause_sequence = cause_unique
            
            print("Cause sequence and state = ", cause_sequence, state)
            
            for msg in StallDictionary[state]:
                if msg not in waits_dictionary:
                    waits_dictionary[msg] = []

                # DUMB BUG SANYA, DUMB BUG 
                # waits_dictionary[msg] = cause_sequence 
                for causal_msg in cause_sequence:
                    if causal_msg not in waits_dictionary[msg]:
                        waits_dictionary[msg].append(causal_msg)
                # if msg == "Fwd_GetML2":
                #     print("The current waiting is: ", waits_dictionary[msg])
                # if msg == "Fwd_GetML2":
                #         print("All the stuff in here")
                #         print(cause_sequence)
                #         print(state)
                #         print(StallDictionary[state])
                # for i in range(0, len(cause_sequence)):    
                #     if cause_sequence[i][1] == find_sender(state):
                #         waits_dictionary[msg].add(cause_sequence[i][0])
                #         print("added here")
                    
    return waits_dictionary

def convert_sets(obj):
    if isinstance(obj, set):
        return list(obj)
    elif isinstance(obj, dict):
        return {k: convert_sets(v) for k, v in obj.items()} 
    elif isinstance(obj, list):
        return [convert_sets(i) for i in obj] 
    return obj 

def gen_waits_graph(input_file, temp_file="put_{}.m", del_temp=False):
    """
    Function takes in an input Murphi file that has the hierarchical protocol specification.
    It returns the waits graph in the form of a dictionary.
    """
    waits_dictionary = {}
    switch_statement_visited = {}

    f = open(input_file, 'r')
    data = f.readlines()
    f.close()
    new_data = []

    for i in range(0, len(data)-1):
        if "case" in data[i] and "switch" in data[i+1]:
            # this is where the put statement should be inserted
            case = data[i].split("case")[1].strip().replace(" ", "").replace(":", "")
            put_statement = "\t\t\t\tput \"SS_PRINT:  \"; put inmsg.mtype; put \"  CASE: {}\"; put \"\\n\"; -- Sanya: inserted a print here\n".format(case)
            data[i] += put_statement
            switch_statement_visited[i] = True
        new_data.append(data[i])
    
    # # # create the new temporary Murphi file
    temp_file = temp_file.format(input_file.split("/")[-1].split(".m")[0])
    # f = open(temp_file, 'w')
    # f.write("".join(new_data))
    # f.close()
    
    # # running the Murphi code
    # result = run_murphi_code(temp_file) # result will be a dictionary
    # with open("useful_result_{}.txt".format(input_file.split("/")[-1].split(".m")[0]), 'w') as f:
    #     f.write("".join(result))
    print("useful_result_{}.txt".format(input_file.split("/")[-1].split(".m")[0]))
    with open("useful_result_{}.txt".format(input_file.split("/")[-1].split(".m")[0]), 'r') as f:
        result = f.readlines()

    # use this result data to construct the graph now
    # first let's collect the no stall data from the Murphi file constructed
    NoStall_dictionary = collect_no_stall_data(temp_file)
    abstracted_nostall_dictionary = {}
    for i in NoStall_dictionary:
        abstracted_nostall_dictionary[i] = set()
        for msg in NoStall_dictionary[i]:
            if msg in ["InvL1_1", "InvL1_2", "InvL2"]:
                abstracted_nostall_dictionary[i].add("Invalidation")
            elif "WB" in msg or "Ack" in msg or "Data" in msg:
                abstracted_nostall_dictionary[i].add("Response")
            elif "Fwd_Get" in msg:
                abstracted_nostall_dictionary[i].add("Fwd-Request")
            else:
                abstracted_nostall_dictionary[i].add("Request")
    print("Abstracted dictionary is: ", abstracted_nostall_dictionary)
    Arriving_dictionary = collect_arriving_data(result)
    # now we can use the above two pieces of data to collect the stalling dictionary
    StallDictionary = collect_stall_data(NoStall_dictionary, Arriving_dictionary)
    print("Stalling dictionary = ", StallDictionary)
    abstracted_stall_dictionary = {}
    for i in StallDictionary:
        abstracted_stall_dictionary[i] = set()
        for msg in StallDictionary[i]:
            if msg in ["InvL1_1", "InvL1_2", "InvL2"]:
                abstracted_nostall_dictionary[i].add("Invalidation")
            elif "WB" in msg or "Ack" in msg or "Data" in msg or "Inv" in msg:
                abstracted_stall_dictionary[i].add("Response")
            elif "Fwd_Get" in msg:
                abstracted_stall_dictionary[i].add("Fwd-Request")
            else:
                abstracted_stall_dictionary[i].add("Request")
    print("Abstracted dictionary is: ", abstracted_stall_dictionary)
    with open("stalling_dictionary.json", "w") as json_file:
        json.dump(convert_sets(abstracted_stall_dictionary), json_file, indent=4)
    with open("no_stalling_dictionary.json", "w") as json_file:
        json.dump(convert_sets(abstracted_nostall_dictionary), json_file, indent=4)
    
    # now constructing the queues behind dictionary
    queue_dictionary = {}
    AllMessagesPossible = {}

    for i in NoStall_dictionary:
        complete_dict = NoStall_dictionary[i] | StallDictionary[i]
        AllMessagesPossible[i] = complete_dict 

    waits_dictionary = extract_waits_for_relationship(StallDictionary, AllMessagesPossible, NoStall_dictionary, data)
    print("The final waits dictionary is: ", waits_dictionary)
    
def get_MessageType(full_text):
    to_ret = []
    full_text_temp = full_text
    for i in range(0, len(full_text_temp)-1):
        if "MessageType: enum {" in full_text_temp[i]:
            for j in range(i+1, len(full_text_temp)-1):
                if "};" in full_text_temp[j]:
                    break
                else:
                    to_ret.append(full_text_temp[j].strip().replace(',', ''))
            break
    return to_ret  

def main():
    """
    - Create the stalls dictionary
    - Construct the queues-behind edges
    - Create the waits graph
    - Generate the cycle
    """
    sys.setrecursionlimit(9000)
    parser = argparse.ArgumentParser()
    parser.add_argument("--input_file", type=str, help="Path to the coherence protocol Murphi file")
    parser.add_argument("--output_file", type=str, default="output.png", help="Output file for the graph")
    args = parser.parse_args()

    murphi_coherence_file = args.input_file
    output_graph = args.output_file

    waits_graph = gen_waits_graph(murphi_coherence_file)
if __name__ == "__main__":
    main()
