#
# General Makefile
#

CXXFLAG=-std=c++20 -I.
CXX=g++
DEPS=
OBJ=8_1.o 8_2.o 8_4.o 8_5.o 8_6.o 8_7.o 8_8.o 8_9.o 8_10.o 8_11.o 8_13.o

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
