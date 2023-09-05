#
# General Makefile
#

CXXFLAG=-std=c++20
CXX=g++
DEPS=./include/Sales_data.h
OBJ=10_1.o 10_2.o 10_3.o 10_4.o 10_5.o 10_6.o 10_7a.o 10_7b.o 10_9.o 10_11.o 10_13.o 10_16.o 10_18.o 10_19.o \
    10_20.o 10_21.o 10_22.o 10_24.o 10_25.o 10_27.o

all: $(OBJ) 10_12 10_17 samples

%.o: %.cc
	-$(CXX) -c -o $@ $< $(CXXFLAG)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

Sales_data.o: Sales_data.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)

10_12.o: 10_12.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)

10_12: Sales_data.o 10_12.o
	-$(CXX) -o $@ Sales_data.o 10_12.o $(CXXFLAG)

10_17.o: 10_17.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)

10_17: Sales_data.o 10_17.o
	-$(CXX) -o $@ Sales_data.o 10_17.o $(CXXFLAG)

.PHONY: all samples clean

samples: 
	cd samples && make

clean:
	find . -type f -not -path "./samples/*" |grep -Ev "cc$$|md$$|txt$$|h$$|Makefile" |xargs rm -f
	cd samples && make clean
