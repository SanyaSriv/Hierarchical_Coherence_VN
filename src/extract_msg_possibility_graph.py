import re

def extract_proc(dest):
    # if "directoryL1_2" in dest:
    #     return "directoryL1_2"
    # if "directoryL1_1" in dest:
    #     return "directoryL1_1"
    # if "directoryL2" in dest:
    #     return "directoryL2"
    # if "cacheL1_1" in dest:
    #     return "cacheL1_1"
    # if "cacheL1_2" in dest:
    #     return "cacheL1_2"
    # return "None"
    return dest



intput_file = 'MSI_MSI_MSI_more_info.txt'

# # we can also generate a new file in here with much more data
# murphi_file = "put_MSI_MSI_MSI.m"
# new_murphi_file = "MSI_MSI_MSI_detailed.m"
# murphi_lines = None
# new_lines = []
# print_statement = "put \"SS_MSG:  \"; put \"{}\"; put \"  SRC: \"; put {}; put \"  DEST: \"; put {}; put \"\\n\"; -- Sanya: inserted a print here\n"
# with open(murphi_file, 'r') as f:
#     murphi_lines = f.readlines()

# for i in murphi_lines:
#     if re.match("\s*msg :=.*", i):
#         new_lines.append(i)
#         # msg := RespL2(adr,GetM_Ack_DL2,m,inmsg.src,cbe.cl);
#         msg = i.strip().split(",")[1].replace(" ", "")
#         src = i.strip().split(",")[2].replace(" ", "")
#         dest = i.strip().split(",")[3].replace(",", "").replace(");", "").replace(" ", "")
#         new_lines.append(print_statement.format(msg, src, dest))
#     else:
#         new_lines.append(i)


# with open(new_murphi_file, 'w') as f:
#     f.write("".join(new_lines))


lines = None
with open(intput_file, 'r') as f:
    lines = f.readlines()

graph = []

for line in range(0, len(lines)):
    if "SS_MSG" in lines[line]:
        # extract the message type
        msg_type = lines[line].split(":")[-1].replace(" ", "").replace("\n", "")
        # extract the source from the next line
        src = lines[line + 1].split(":")[-1].replace(" ", "").replace("\n", "")
        src = extract_proc(src)
        # extractthe destinaitn fromt he line after that
        dest = lines[line + 2].split(":")[-1].replace(" ", "").replace("\n", "")
        dest = extract_proc(dest)
        
        edge = [msg_type, src, dest]
        if edge not in graph:
            graph.append(edge)

for edge in graph:
    print(edge)