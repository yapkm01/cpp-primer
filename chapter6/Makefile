#
# General Makefile
#

CXXFLAG=-std=c++20
CXX=g++
DEPS=./include/*.h
OBJ=6_3.o 6_4.o 6_5.o 6_10.o 6_11.o 6_12.o 6_14a.o 6_14b.o 6_17a.o 6_17b.o 6_21.o 6_22.o 6_23.o 6_25.o 6_26.o \
    6_27.o 6_30.o 6_33.o 6_38.o 6_42.o 6_44.o 6_47.o 6_51.o 6_54.o 6_55.o 

all: $(OBJ) 6_9_factmain samples

%.o: %.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

6_9_fact.o: 6_9_fact.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)

6_9_factmain.o: 6_9_factmain.cc
	-$(CXX) -c -o $@ $< $(CXXFLAG)

6_9_factmain: 6_9_fact.o 6_9_factmain.o
	-$(CXX) -o $@ 6_9_fact.o 6_9_factmain.o $(CXXFLAG)

.PHONY: all samples clean

samples: 
	cd samples && make

clean:
	find . -type f -not -path "./samples/*" |grep -Ev "cc$$|md$$|txt$$|h$$|Makefile" |xargs rm -f
	cd samples && make clean
