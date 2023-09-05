#
# General Makefile
#

CXXFLAG=-std=c++20 -I.
CXX=g++
DEPS=
OBJ=3_2a.o 3_2b.o 3_4a.o 3_4b.o 3_5a.o 3_5b.o 3_6.o 3_7.o 3_8.o 3_10.o 3_14.o 3_15.o \
    3_16.o 3_17.o 3_19.o 3_20a.o 3_20b.o 3_21.o 3_22.o \
    3_23.o 3_24.o 3_25.o 3_31.o 3_32.o 3_35.o 3_36.o 3_39.o 3_40.o 3_41.o 3_42.o \
    3_43.o 3_44.o 3_45.o 

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
