#
# General Makefile
#

CXXFLAG=-std=c++20
CXX=g++
DEPS=./include/*.h
OBJ=7_1.o 7_3.o 7_7.o 7_11.o 7_13.o 7_21.o 7_22.o 7_23.o 7_26.o 7_27.o 7_29.o 7_31.o 7_32.o 7_35.o 7_38.o 7_41.o \
    7_43.o 7_50.o 7_52.o 7_53.o 7_55.o 7_57.o

all: $(OBJ) samples

%.o: %.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

.PHONY: all samples clean

samples: 
	cd samples && make

clean:
	find . -type f -not -path "./samples/*" |grep -Ev "cc$$|md$$|txt$$|h$$|Makefile" |xargs rm -f
	cd samples && make clean
