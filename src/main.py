"""
This file contains all code related to building the waits graph from the Murphi file.
In this project, I began implementing the code from scratch based on the descriptions 
provided in the paper by Li et al. However, during the development process, I incorporated 
several functions, particularly those related to the graph coloring algorithm, from the 
authors’ publicly available codebase. As a result, the final implementation is a hybrid: 
partially re-implemented and partially taken from the original code. 

Public repo for the ISCA paper: https://github.com/Author1-isca24/ISCA24-AE/tree/main
"""

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

edge_list = [['GetML1_1', 'cacheL1_1', 'directoryL1_1'],
['GetML1_1', 'cacheL1_1', 'directoryL1_1'],
['GetSL1_1', 'cacheL1_1', 'directoryL1_1'],
['GetSL1_1', 'cacheL1_1', 'directoryL1_1'],
['GetSL1_2', 'cacheL1_2', 'directoryL1_2'],
['GetSL1_2', 'cacheL1_2', 'directoryL1_2'],
['GetML1_2', 'cacheL1_2', 'directoryL1_2'],
['GetML1_2', 'cacheL1_2', 'directoryL1_2'],
['GetML2', 'directoryL1_1', 'directoryL2'],
['GetSL2', 'directoryL1_1', 'directoryL2'],
['GetSL2', 'directoryL1_2', 'directoryL2'],
['GetML2', 'directoryL1_2', 'directoryL2'],
['GetM_Ack_DL2', 'directoryL2', 'directoryL1_1'],
['GetS_AckL2', 'directoryL2', 'directoryL1_1'],
['GetS_AckL2', 'directoryL2', 'directoryL1_2'],
['GetM_Ack_DL2', 'directoryL2', 'directoryL1_2'],
['GetM_Ack_DL1_1', 'directoryL1_1', 'cacheL1_1'],
['GetS_AckL1_1', 'directoryL1_1', 'cacheL1_1'],
['GetS_AckL1_2', 'directoryL1_2', 'cacheL1_2'],
['GetM_Ack_DL1_2', 'directoryL1_2', 'cacheL1_2'],
['GetML1_1', 'directoryL1_1', 'directoryL1_1'],
['Fwd_GetML1_1', 'directoryL1_1', 'cacheL1_1'],
['GetM_Ack_ADL1_1', 'directoryL1_1', 'directoryL1_1'],
['InvL1_1', 'directoryL1_1', 'directoryL1_1'],
['GetS_AckL1_1', 'directoryL1_1', 'cacheL1_1'],
['GetML1_2', 'directoryL1_2', 'directoryL1_2'],
['GetM_Ack_ADL1_2', 'directoryL1_2', 'directoryL1_2'],
['InvL1_2', 'directoryL1_2', 'directoryL1_2'],
['GetS_AckL1_2', 'directoryL1_2', 'cacheL1_2'],
['Fwd_GetML1_2', 'directoryL1_2', 'cacheL1_2'],
['Fwd_GetML1_1', 'directoryL1_1', 'cacheL1_1'],
['PutML1_1', 'cacheL1_1', 'directoryL1_1'],
['Fwd_GetML1_1', 'cacheL1_1', 'cacheL1_1'],
['Fwd_GetSL1_1', 'cacheL1_1', 'cacheL1_1'],
['Fwd_GetSL2', 'directoryL1_2', 'directoryL1_1'],
['Fwd_GetML2', 'directoryL1_2', 'directoryL1_1'],
['GetM_Ack_ADL2', 'directoryL2', 'directoryL1_1'],
['InvL2', 'directoryL1_1', 'directoryL1_1'],
['Fwd_GetML2', 'directoryL1_1', 'directoryL1_2'],
['PutSL1_1', 'cacheL1_1', 'directoryL1_1'],
['GetM_Ack_ADL2', 'directoryL2', 'directoryL1_2'],
['InvL2', 'directoryL1_2', 'directoryL1_2'],
['Fwd_GetSL2', 'directoryL1_1', 'directoryL1_2'],
['PutSL1_2', 'cacheL1_2', 'directoryL1_2'],
['PutML1_2', 'cacheL1_2', 'directoryL1_2'],
['Fwd_GetSL1_2', 'cacheL1_2', 'cacheL1_2'],
['Fwd_GetML1_2', 'cacheL1_2', 'cacheL1_2'],
['Fwd_GetML1_2', 'directoryL1_2', 'cacheL1_2'],
['GetM_Ack_DL1_1', 'cacheL1_1', 'directoryL1_1'],
['PutML1_1', 'cacheL1_1', 'directoryL1_1'],
['Put_AckL1_1', 'directoryL1_1', 'cacheL1_1'],
['Fwd_GetML1_1', 'cacheL1_1', 'cacheL1_1'],
['Fwd_GetSL1_1', 'cacheL1_1', 'cacheL1_1'],
['Inv_AckL1_1', 'cacheL1_1', 'directoryL1_1'],
['PutSL1_1', 'cacheL1_1', 'directoryL1_1'],
['Inv_AckL1_2', 'cacheL1_2', 'directoryL1_2'],
['Put_AckL1_2', 'directoryL1_2', 'cacheL1_2'],
['GetM_Ack_DL1_2', 'cacheL1_2', 'directoryL1_2'],
['Fwd_GetML1_2', 'cacheL1_2', 'cacheL1_2'],
['PutML1_1', 'directoryL1_1', 'directoryL1_1'],
['Put_AckL1_1', 'directoryL1_1', 'directoryL1_1'],
['PutML2', 'directoryL1_1', 'directoryL2'],
['GetM_Ack_DL1_1', 'directoryL1_1', 'directoryL1_1'],
['GetM_Ack_DL1_1', 'cacheL1_1', 'cacheL1_1'],
['GetS_AckL1_1', 'cacheL1_1', 'cacheL1_1'],
['WBL1_1', 'cacheL1_1', 'directoryL1_1'],
['GetSL1_1', 'directoryL1_1', 'directoryL1_1'],
['Fwd_GetSL1_1', 'directoryL1_1', 'cacheL1_1'],
['PutSL2', 'directoryL1_1', 'directoryL2'],
['GetM_Ack_ADL1_1', 'directoryL1_1', 'cacheL1_1'],
['InvL1_1', 'cacheL1_1', 'cacheL1_1'],
['GetSL1_2', 'directoryL1_2', 'directoryL1_2'],
['Fwd_GetSL1_2', 'directoryL1_2', 'cacheL1_2'],
['PutML1_2', 'directoryL1_2', 'directoryL1_2'],
['Put_AckL1_2', 'directoryL1_2', 'directoryL1_2'],
['PutSL2', 'directoryL1_2', 'directoryL2'],
['GetM_Ack_DL1_2', 'directoryL1_2', 'directoryL1_2'],
['GetM_Ack_ADL1_2', 'directoryL1_2', 'cacheL1_2'],
['InvL1_2', 'cacheL1_2', 'cacheL1_2'],
['PutML2', 'directoryL1_2', 'directoryL2'],
['GetS_AckL1_2', 'cacheL1_2', 'cacheL1_2'],
['WBL1_2', 'cacheL1_2', 'directoryL1_2'],
['GetM_Ack_DL1_2', 'cacheL1_2', 'cacheL1_2'],
['Put_AckL2', 'directoryL2', 'directoryL1_1'],
['GetM_Ack_DL1_1', 'cacheL1_1', 'cacheL1_1'],
['Put_AckL1_1', 'directoryL1_1', 'cacheL1_1'],
['Fwd_GetSL1_1', 'directoryL1_1', 'cacheL1_1'],
['GetM_Ack_ADL1_1', 'directoryL1_1', 'cacheL1_1'],
['InvL1_1', 'cacheL1_1', 'cacheL1_1'],
['Inv_AckL1_1', 'cacheL1_1', 'directoryL1_1'],
['Fwd_GetSL1_2', 'directoryL1_2', 'cacheL1_2'],
['Put_AckL2', 'directoryL2', 'directoryL1_2'],
['PutSL1_2', 'cacheL1_2', 'directoryL1_2'],
['GetM_Ack_ADL1_2', 'directoryL1_2', 'cacheL1_2'],
['InvL1_2', 'cacheL1_2', 'cacheL1_2'],
['GetM_Ack_DL1_2', 'directoryL1_2', 'cacheL1_2'],
['GetS_AckL1_1', 'cacheL1_1', 'directoryL1_1'],
['Inv_AckL1_1', 'cacheL1_1', 'cacheL1_1'],
['GetS_AckL1_2', 'cacheL1_2', 'directoryL1_2'],
['Inv_AckL1_2', 'cacheL1_2', 'directoryL1_2'],
['Inv_AckL1_2', 'cacheL1_2', 'cacheL1_2'],
['GetS_AckL1_1', 'directoryL1_1', 'directoryL1_1'],
['PutSL1_1', 'directoryL1_1', 'directoryL1_1'],
['GetS_AckL2', 'directoryL1_1', 'directoryL1_2'],
['WBL2', 'directoryL1_1', 'directoryL2'],
['GetM_Ack_DL2', 'directoryL1_1', 'directoryL1_2'],
['Inv_AckL2', 'directoryL1_2', 'directoryL1_1'],
['GetM_Ack_DL2', 'directoryL1_2', 'directoryL1_1'],
['Inv_AckL2', 'directoryL1_1', 'directoryL1_2'],
['Inv_AckL1_1', 'cacheL1_1', 'cacheL1_1'],
['GetS_AckL1_2', 'directoryL1_2', 'directoryL1_2'],
['PutSL1_2', 'directoryL1_2', 'directoryL1_2'],
['GetS_AckL2', 'directoryL1_2', 'directoryL1_1'],
['WBL2', 'directoryL1_2', 'directoryL2'],
['Put_AckL1_2', 'directoryL1_2', 'cacheL1_2'],
['PutML1_2', 'cacheL1_2', 'directoryL1_2'],
['GetM_Ack_DL1_2', 'cacheL1_2', 'directoryL1_2'],
['Inv_AckL1_2', 'cacheL1_2', 'cacheL1_2'],
['GetM_Ack_DL1_1', 'directoryL1_1', 'cacheL1_1'],
['GetS_AckL1_2', 'cacheL1_2', 'directoryL1_2'],
['WBL1_2', 'cacheL1_2', 'directoryL1_2'],
['GetS_AckL1_1', 'cacheL1_1', 'directoryL1_1'],
['WBL1_1', 'cacheL1_1', 'directoryL1_1']]

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

# def find_CauseMsg(state, cause_msg, full_text, allmsg_dict):
#     full_text_temp = full_text
#     grey_tag = 0
    
#     # create the directory_state from all states
#     directory_state = []
#     for state1 in allmsg_dict:
#         if ('directory' in state1):
#             directory_state.append(state1)
#     print("\n\nIN HEREEEEEEEE")
#     print(f'directory state is{directory_state}\n\n')
#     print("The target state is: ", state)
#     breaky = 0 # if this is set then we break
#     for i in range(0, len(full_text_temp)-1):
#         TargetState = ("State := " + "%s") % (state)
#         breaky = 0
#         if TargetState in full_text_temp[i]:      
#             for j in range(i, -1, -1):
#                 print(full_text_temp[j])
#                 if "case" in full_text_temp[j]:
#                     break
#                 if re.match("\s*msg :=.*", full_text_temp[j]):
#                     # please check that this does not come from a procedure ----> added by Sanya - still in progress
#                     temp = j
#                     for tempy in range(j, -1, -1):
#                         if "case" in full_text_temp[tempy]:
#                             break
#                         elif "procedure" in full_text_temp[tempy]:
#                             print("this is true that this message was found from a procedure")
#                             breaky = 1 # we cannot return in here, we still need to search the rest of the code
#                     if breaky == 1:
#                         break
#                     msg = full_text_temp[j].split(',', 1)[1].split(',', 1)[0].strip()
#                     cause_msg.append(msg)
#                     # # if this message is grey in this state, then set the tag
#                     # # this msg will be removed from the cause graph
#                     # if ((msg not in allmsg_dict[state]) and (state not in directory_state)):
#                     #     grey_tag = 1
#                     # break
#     print("The cause message is: ", cause_msg)               
#     return cause_msg, grey_tag

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

def find_CauseMsg(state, cause_msg, full_text, allmsg_dict):
    full_text_temp = full_text
    grey_tag = 0

    # create the directory_state from all states
    directory_state = []
    for state1 in allmsg_dict:
        if ('directory' in state1):
            directory_state.append(state1)

    print("The target state is: ", state)
    breaky = 0 # if this is set then we break
    for i in range(0, len(full_text_temp)-1):
        TargetState = ("State := " + "%s") % (state)
        breaky = 0
        if TargetState in full_text_temp[i]:      
            for j in range(i, -1, -1):
                print(full_text_temp[j])
                if "case" in full_text_temp[j]:
                    break
                if re.match("\s*msg :=.*", full_text_temp[j]):
                    # please check that this does not come from a procedure ----> added by Sanya - still in progress
                    temp = j
                    for tempy in range(j, -1, -1):
                        if "case" in full_text_temp[tempy]:
                            break
                        elif "procedure" in full_text_temp[tempy]:
                            # print("this is true that this message was found from a procedure")
                            breaky = 1 # we cannot return in here, we still need to search the rest of the code
                    if breaky == 1:
                        break
                    msg = full_text_temp[j].split(',', 1)[1].split(',', 1)[0].strip()
                    cause_msg_sender = find_sender(state)
                    print("Finding the causal message in here: ", [msg, cause_msg_sender])
                    cause_msg.append([msg, cause_msg_sender])
                    # # if this message is grey in this state, then set the tag
                    # # this msg will be removed from the cause graph
                    # if ((msg not in allmsg_dict[state]) and (state not in directory_state)):
                    #     grey_tag = 1
                    # break
    print("The cause message is: ", cause_msg)               
    return cause_msg,  grey_tag

def CauseSeq_build(full_text, cause_msg, grey_tag): 
    cause_sequence = []
    
    for msg in cause_msg:
        # # if the stalling message is a grey message, then the first message will not be in the cause graph
        # if not grey_tag:
        #     cause_sequence.append(msg)
        newpy = []
        print("msg = ", msg)
        CauseSeq_dfs(full_text, msg, newpy)
        for i in newpy:
            cause_sequence.append(i)

    return cause_sequence

# def CauseSeq_dfs(full_text, msg, cause_sequence):
#     print("inside the case sequence dfs")
#     end_tag = True
#     msg_next = []
#     full_text_temp = full_text

#     # SANYA - CHANGES TO BE MADE
#     # find out which directory sent this "msg"
#     # the next message in the chain should not be recieved by the same directory that sent this one. 
    
#     for i in range(0, len(full_text_temp)-1):
#             case_msg = ("case " + "%s" + ":") % (msg)
#             if case_msg in full_text_temp[i]:
#                 print(full_text_temp[i])
#                 for j in range(i+1, len(full_text_temp)-1):
#                     print(full_text_temp[j])
#                     if (("return" in full_text_temp[j]) or ("case" in full_text_temp[j])):
#                         # this message doesn't have the following message
#                         if (end_tag):
#                             break
# #                             return cause_sequence

#                         else:
#                             # this message have the following message, then go to the next message
#                             cause_sequence = CauseSeq_dfs(full_text, msg_next, cause_sequence)
#                             break
# #                             return cause_sequence  
#                     # print(full_text_temp[j])
#                     if re.match("\s*msg :=.*", full_text_temp[j]):
#                     # if "\s*msg :=" in full_text_temp[j]:
#                         msg_next = full_text_temp[j].split(',', 1)[1].split(',', 1)[0].strip()
#                         cause_sequence.append(msg_next)
#                         end_tag = False
    
#     return cause_sequence

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

def CauseSeq_dfs(full_text, msg, cause_sequence):
    print("inside the case sequence dfs", msg[0])
    end_tag = True
    msg_next = []
    full_text_temp = full_text

    # SANYA - CHANGES TO BE MADE
    # find out which directory sent this "msg"
    # the next message in the chain should not be recieved by the same directory that sent this one. 
    
    for i in range(0, len(full_text_temp)-1):
            case_msg = ("case " + "%s" + ":") % (msg[0])
            if case_msg in full_text_temp[i]:
                # print(full_text_temp[i])
                for j in range(i+1, len(full_text_temp)-1):
                    # print(full_text_temp[j])
                    if (("return" in full_text_temp[j]) or ("case" in full_text_temp[j])):
                        # this message doesn't have the following message
                        if (end_tag):
                            break
#                             return cause_sequence

                        else:
                            # this message have the following message, then go to the next message
                            cause_sequence = CauseSeq_dfs(full_text, msg_next, cause_sequence)
                            break
#                             return cause_sequence  
                    # print(full_text_temp[j])
                    if re.match("\s*msg :=.*", full_text_temp[j]):
                    # if " msg :=" in full_text_temp[j]:
                        # over here we need to check that this new message that was sent after the previous was processed is not processed by the same node
                        # in other words, we do not want the same node to send a message and then the message getting processed by itself (Self loops should not be allowed)
                        processor = get_msg_processor(full_text_temp[j], j, full_text_temp)
                        # if processor != msg[1]:
                        # Sanya - instead of just checking this, I am also disallowing
                        # transitions between 2 states within the same heirarchy
                        # for example, if a message is sent by DirectoryL1_1, then it should either
                        # go to the cache or to L2, but should not directly go to DirectoryL1_2 in my opinion
                        # CONFIRM WITH OTHERS
                        # if (processor != msg[1]) and (('directoryL1' in processor and 'directoryL1' in msg[1]) == False):
                        # print("explicit printing in here: ", [full_text_temp[j].split(',', 1)[1].split(',', 1)[0].strip(), msg[1], processor], ([full_text_temp[j].split(',', 1)[1].split(',', 1)[0].strip(), msg[1], processor] in edge_list))
                        if (processor != msg[1]) or ("cache" in processor and "cache" in msg[1]):
                        # if not ((processor == "directoryL1_1" and msg[1] == "directoryL1_1" and msg[0] == "GetM_Ack_DL2")
                            #    or ((processor == "directoryL1_2" and msg[1] == "directoryL1_2" and msg[0] == "GetM_Ack_DL1_2")) or
                                #  ((processor == "directoryL1_1" and msg[1] == "directoryL1_1" and msg[0] == "GetM_Ack_DL1_1")) or
                                #  ((processor == "directoryL1_2" and msg[1] == "directoryL1_2" and msg[0] == "GetM_Ack_DL2"))):
                            print(full_text_temp[j])
                            msg_next = [full_text_temp[j].split(',', 1)[1].split(',', 1)[0].strip(), processor]
                            print(msg[1], processor, " | ", msg[0], msg_next[0])
                            cause_sequence.append(msg_next)
                            end_tag = False
    
    return cause_sequence

global_causes = {}

#     # Store a copy to prevent mutation issues
#     global_causes[msg] = cause_sequence.copy()
    
#     # Remove msg from visited after recursion is done
#     visited.remove(msg)

#     return global_causes[msg]


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
    
    # # create the new temporary Murphi file
    temp_file = temp_file.format(input_file.split("/")[-1].split(".m")[0])
    f = open(temp_file, 'w')
    f.write("".join(new_data))
    f.close()
    
    # # running the Murphi code
    result = run_murphi_code(temp_file) # result will be a dictionary
    with open("useful_result_{}.txt".format(input_file.split("/")[-1].split(".m")[0]), 'w') as f:
        f.write("".join(result))
    print("useful_result_{}.txt".format(input_file.split("/")[-1].split(".m")[0]))
    with open("useful_result_{}.txt".format(input_file.split("/")[-1].split(".m")[0]), 'r') as f:
        result = f.readlines()

    # use this result data to construct the graph now
    # first let's collect the no stall data from the Murphi file constructed
    NoStall_dictionary = collect_no_stall_data(temp_file)
    Arriving_dictionary = collect_arriving_data(result)
    # now we can use the above two pieces of data to collect the stalling dictionary
    StallDictionary = collect_stall_data(NoStall_dictionary, Arriving_dictionary)
    print("Stalling dictionary = ", StallDictionary)
    with open("stalling_dictionary.json", "w") as json_file:
        json.dump(convert_sets(StallDictionary), json_file, indent=4)
    with open("no_stalling_dictionary.json", "w") as json_file:
        json.dump(convert_sets(NoStall_dictionary), json_file, indent=4)
    # we can also generate a .png file for this stalls dictionary
    generate_png_data(StallDictionary, "stall_graph_{}.html".format(temp_file.split(".m")[0]))
    # use the results to construct all kinds of dictionaries needed
    if del_temp == True:
        os.remove(temp_file)
    
    # now constructing the queues behind dictionary
    queue_dictionary = {}
    AllMessagesPossible = {}

    for i in NoStall_dictionary:
        complete_dict = NoStall_dictionary[i] | StallDictionary[i]
        AllMessagesPossible[i] = complete_dict 

    print("All messages possible = ", AllMessagesPossible)
    # now we can construct the queues behind edges
    for i in AllMessagesPossible:
        for msg in AllMessagesPossible[i]:
            for msg2 in AllMessagesPossible[i]:
                if msg != msg2:
                    # queue it behind
                    if msg in queue_dictionary:
                        queue_dictionary[msg].append(msg2)
                    else:
                        queue_dictionary[msg] = [msg2]

    print("The queues dictionary is: ", queue_dictionary)
    # now we can construct the final waits graph
    # things are getting fishy in here - please check this code
    cause_sequence = []
    cause_msg = []
    for state in StallDictionary:
        # traverse all states which have the stalling messages
        print(StallDictionary[state], state)
        if (len(StallDictionary[state]) != 0):
            cause_msg, grey_tag = find_CauseMsg(state, cause_msg, data, AllMessagesPossible)
            print("the cause message initial: ", cause_msg)
            cause_sequence = CauseSeq_build(data, cause_msg, grey_tag)
            # removing all the repeated elements from cause_sequence
            cause_unique = []
            for uniq in cause_sequence:
                if uniq not in cause_unique:
                    cause_unique.append(uniq)
            cause_sequence = cause_unique
            print("Cause sequence and state = ", cause_sequence, state)
            print("state here = ", state)
            for msg in StallDictionary[state]:
                if msg not in waits_dictionary:
                    waits_dictionary[msg] = set()  
                if msg == "Fwd_GetML2":
                        print("All the stuff in here")
                        print(cause_sequence)
                        print(state)
                        print(StallDictionary[state])
                for i in range(0, len(cause_sequence)):
                    # ADDITIONS MADE BY SANYA SRIVASTAVA IN HERE    
                    if cause_sequence[i][1] == find_sender(state):
                        waits_dictionary[msg].add(cause_sequence[i][0])
                        print("added here")
                    
        cause_sequence = []
        cause_msg = []

    print("The final waits dictionary is: ", waits_dictionary)
    
    # from this waits graph, we shoult now construct something good
    if_class2, G_P, cyclic_edges = dict2graph(waits_dictionary, queue_dictionary, get_MessageType(data))
    print("Class of this message: ", if_class2)
    pos = nx.random_layout(G_P, seed=4)
    plt.figure(figsize=(12, 12))
    nx.draw(G_P, pos=pos, with_labels=True, node_color='lightblue', edge_color='gray') 
    nx.draw_networkx_edges(G_P, pos, edgelist=cyclic_edges, edge_color='red', width=2)
    plt.savefig(('waitgraph_MSI_MSI_MESI.png'.format(input_file)), format='png', dpi=300)

    # if there is a cycle in the waits edge, then the protocol is considered class 2
    # adding Weihang;s code here justfor now
    min_fas = FAS_compute(G_P, waits_dictionary)
    print("MINNN FAS = ", min_fas)
    # print(f"Finish finding the minimal feed back arc set, now start to find possible assignments for {max_vn} virtual networks\n")

    G_fas = set2graph(min_fas, get_MessageType(data))
    # G_removed = G_P.copy()
    # G_removed.remove_edges_from(min_fas)
    # print("graph tp be colored = ", G_removed.edges())
    # add wait_graph to the G_fas
    for msg_w in waits_dictionary:
        for msg_wfor in waits_dictionary[msg_w]:
            G_fas.add_edge(msg_w, msg_wfor)
        
    # # Now we play the graph coloring algorithm on the conflict graph
    max_vn = 4
    print("Now start to find all the possible assignments")
    print("GP = ", G_P.nodes())
    colorings = graph_coloring(G_fas, max_vn, coloring={}, gppp=G_P)
    print(colorings)
    print(f"All the assignments for {max_vn} virtual networks are found!")   
    exit()
    return waits_dictionary
def set2graph(min_fas, MessageType):
    G_fas = nx.Graph()
    for msg in MessageType:
        G_fas.add_node(msg)
        
    for edge in min_fas:
        G_fas.add_edge(*edge)
        
    return G_fas
def FAS_compute(G_P, wait_dict):
    print("Wait dict = ", wait_dict)
    # when finding the minimal FAS, the edges in "waiting-for" graph can't be removed
    # parse the wait_dict to get this edges
    not_to_remove = set()
    G_P_wait = nx.DiGraph()
    
    for msg_w in wait_dict:
        for msg_wfor in wait_dict[msg_w]:
            not_to_remove.add((msg_w, msg_wfor))
    print("not_to_remove = ", not_to_remove)
    print("Inside here")
    
    # now we can use brute-force to search the G_P to find the minimal FAS
    in_flag = 0
    all_edges = list(G_P.edges())
    print("All edges = ", all_edges)
    print("Number of edges are: ", G_P.number_of_edges())
    num_edges = len(all_edges)
    min_size = num_edges + 1
    min_fas = set(all_edges) 

    # construct a list of all the removable edges
    removable_edges = []
    for e in range(0, num_edges):
        if all_edges[e] not in not_to_remove:
            removable_edges.append(all_edges[e])
    print("The number of removable edges are:", len(removable_edges))
    print(removable_edges)
    print(not_to_remove)
    # removing binary search from here, so we can
    # see the minimal edges removed assignemnt from the base code
    # Sanya - revert it back to binary search if there is need
    for i in range(0, len(removable_edges)):
        print(f'{i} edges are removed')
        combi = itertools.combinations(removable_edges, i)
        for subset in itertools.combinations(removable_edges, i):
            # print("checked")
            if is_acyclic_after_removal(G_P, subset):
                print("one of the good combinations have been found")
                G_removed = G_P.copy()
                G_removed.remove_edges_from(subset)
                pos = nx.random_layout(G_removed, seed=4)
                plt.figure(figsize=(12, 12))
                nx.draw(G_P, pos=pos, with_labels=True, node_color='lightblue', edge_color='gray') 
                plt.savefig(('small.png'), format='png', dpi=300)
                if (i < min_size): 
                    min_fas = set(subset)
                    min_size = i
                    print(f'After {i} edgesare removed, we found the minimal feed back arc set') 
                    return min_fas
                else:
                    return min_fas
                break
    print(f'After {i} edgesare removed, we found the minimal feed back arc set')              
    return min_fas

def is_valid_coloring(G_fas, coloring):
    for node in G_fas:
        for neighbor in G_fas[node]:
            if neighbor in coloring and node in coloring:
                if coloring[neighbor] == coloring[node]:
                    return False
    return True
def graph_coloring(G_fas, max_vn=10, coloring={}, node_list=None, gppp=None):
    if node_list is None:
        node_list = list(gppp.nodes())

    # if len(coloring) == len(G_fas):
    if len(coloring) == len(list(gppp.nodes())):
        # pprint.pprint(coloring)
        return [dict(coloring)]
    
    colorings = []
    print(len(node_list), len(coloring), len(G_fas))
    node = node_list[0]
    for color in range(max_vn):
        coloring[node] = color
        if is_valid_coloring(G_fas, coloring):
            result = graph_coloring(G_fas, max_vn, coloring, node_list[1:], gppp)
            colorings.extend(result)
            print(result)
            return colorings
    del coloring[node]

    return colorings


def find_cyclic_edges(G):
    #Find edges involved in cycles
    cyclic_edges = set()
    for cycle in nx.simple_cycles(G):
        for i in range(len(cycle)):
            cyclic_edges.add((cycle[i], cycle[(i + 1) % len(cycle)]))
    return cyclic_edges

def dict2graph(wait_dict, queue_dict, MessageType):
    G_P = nx.DiGraph()
    wait_edge = set()
    # initialize G_P: the messages are the nodes
    for msg in MessageType:
        G_P.add_node(msg)
    
    # transform the wait_dict and queue_dict to the edges in G_O  
    for msg_w in wait_dict:
        for msg_wfor in wait_dict[msg_w]:
            G_P.add_edge(msg_w, msg_wfor, weight=400)
            wait_edge.add((msg_w, msg_wfor))
    
    if not nx.is_directed_acyclic_graph(G_P):
        cyclic_edges = find_cyclic_edges(G_P)
        print("This is a class 2 protocol")
        return True, G_P, cyclic_edges
    
    for msg_q in queue_dict:
        for msg_qbhd in queue_dict[msg_q]:
            G_P.add_edge(msg_q, msg_qbhd, weight=1)
            
    # now we have the original G_P, but we want the shortest paths between all pairs of vertices
    # note for Sanya - I think here is where the randomness is coming from
    G_P_shortest = nx.DiGraph()
    for node1, node2 in itertools.combinations(G_P.nodes(), 2):
        try:
            path = nx.shortest_path(G_P, source=node1, target=node2, weight='weight')
            if (path[0], path[1]) in wait_edge or (path[1], path[0]) in wait_edge:
                path_edges = zip(path, path[1:])
                G_P_shortest.add_edges_from(path_edges)
        
        except nx.NetworkXNoPath:
            continue
            
    # print("This is *not* a class 2 protocol, we can break these cycles with a VN assignment.")
    return False, G_P_shortest, None
    # return False, G_P, None
    
def is_acyclic_after_removal(G_P, edges_to_remove):
    temp = G_P.copy()
    temp.remove_edges_from(edges_to_remove)
    return nx.is_directed_acyclic_graph(temp)

# def is_acyclic_after_removal(G, edges_to_remove):
#     G.remove_edges_from(edges_to_remove)
#     result = nx.is_directed_acyclic_graph(G)
#     G.add_edges_from(edges_to_remove)  # restore
#     return result

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
    print("to ret = ", to_ret)
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
