#
# General Makefile
#

CXXFLAG=-std=c++20 -I.
CXX=g++
DEPS=./include/hello_world.h
SHARED_OBJ=hello_world
OBJ=def_val_zero_init s_values_init use_hello_world

%.o: %.cc $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAG)

all: ${OBJ}

def_val_zero_init: def_val_zero_init.o
	$(CXX) -o $@ $< $(CXXFLAG)

s_values_init: s_values_init.o
	$(CXX) -o $@ $< $(CXXFLAG)

hello_world.o: hello_world.cc
	$(CXX) -c -o $@ $< $(CXXFLAG)
	$(CXX) -shared -o lib$(patsubst %.o,%,$@).so $@ $(CXXFLAG) -fPIC

use_hello_world: use_hello_world.o hello_world.o
	$(CXX) -o $@ $< -L. -Wl,-rpath=. -Wall -l$(SHARED_OBJ) $(CXXFLAG)

.PHONY: all clean

clean:
	find . -type f |grep -Ev "cc$$|md$$|txt$$|h$$|Makefile" |xargs rm -f
