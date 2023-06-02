
# General Makefile
#

CXXFLAG=-std=c++20 -I.
CXX=g++
DEPS=
OBJ=xcess_specifiers_inheritance.o

%.o: %.cc $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAG)
	$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

all: $(OBJ)

.PHONY: clean

clean:
	find . -type f |grep -Ev "cc$$|h$$|Makefile" |xargs rm -f

