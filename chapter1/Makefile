#
# General Makefile
#

CXXFLAG=-std=c++20 -I.
CXX=g++
DEPS=./include/Sales_item.h
OBJ=1_1.o 1_2.o 1_3.o 1_4.o 1_5.o 1_7.o 1_8.o 1_9.o 1_10.o 1_11.o 1_12.o 1_13a.o 1_13b.o 1_13c.o 1_15a.o 1_15b.o \
    1_16.o 1_18.o 1_19.o 1_20.o 1_21.o 1_22.o 1_23.o 1_24.o 1_25.o 

%.o: %.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

all: $(OBJ) samples

.PHONY: all samples clean

samples: 
	cd samples && make

clean:
	find . -type f -not -path "./samples/*" |grep -Ev "cc$$|md$$|txt$$|h$$|Makefile" |xargs rm -f
	cd samples && make clean
