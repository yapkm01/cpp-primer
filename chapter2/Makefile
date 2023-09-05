#
# General Makefile
#

CXXFLAG=-std=c++20 -I.
CXX=g++
DEPS=./include/2_42.h
OBJ=2_4.o 2_8a.o 2_8b.o 2_18.o 2_34.o 2_35.o 2_39.o 2_41a.o 2_41b.o 2_41c.o 2_41d.o 2_41e.o 2_42a.o 2_42b.o 2_42c.o 2_42d.o  

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
