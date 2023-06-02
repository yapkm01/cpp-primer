#
# General Makefile
#

CXXFLAG=-std=c++20 -I.
CXX=g++
DEPS=
OBJ=8_1.o 8_2.o

%.o: %.cc $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAG)
	$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

all: $(OBJ) samples

.PHONY: all samples clean

samples: 
	cd samples && make

clean:
	find . -type f -not -path "./samples/*" |grep -Ev "cc$$|md$$|txt$$|Makefile" |xargs rm -f
	cd samples && make clean
