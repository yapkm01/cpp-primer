#
# General Makefile
#

CXXFLAG=-std=c++20 -I.
CXX=g++
DEPS=
OBJ=5_3.o 5_5.o 5_6.o 5_9.o 5_10.o 5_11.o 5_12.o 5_14.o 5_17.o 5_19.o 5_20.o 5_21.o 5_23.o 5_24.o 5_25.o 

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
