
# General Makefile
#

CXXFLAG=-std=c++20 -I.
CXX=g++
DEPS=
OBJ=unsigned.o sizeof.o pointers.o constref_init.o constref_dec_specifier_seq.o

%.o: %.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

all: $(OBJ)

.PHONY: clean

clean:
	find . -type f |grep -Ev "cc$$|h$$|Makefile" |xargs rm -f

