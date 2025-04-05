INCLUDEPATH = ../cmurphi-master/include
SRCPATH = ../cmurphi-master/src/

CXX = g++ -g -O3 -DDISK_MURPHI

# scalar set of the left half of the tree and the right half of the tree
# CFLAGS = -DYYSTACKSIZE=10000000

# optimization
OFLAGS =
#OFLAGS = -O3

#Murphi options
MURPHIOPTS = -b -c

put_MSI_MSI_MOSI: put_MSI_MSI_MOSI.cpp
	${CXX} ${CFLAGS} ${OFLAGS} -o put_MSI_MSI_MOSI put_MSI_MSI_MOSI.cpp -I${INCLUDEPATH} -lm

put_MSI_MSI_MOSI.cpp: put_MSI_MSI_MOSI.m
	${SRCPATH}mu ${MURPHIOPTS} put_MSI_MSI_MOSI.m

