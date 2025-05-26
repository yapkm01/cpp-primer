#
# General Makefile
#

BUILD := build
INC := -Iinclude
CXXFLAG := -std=c++20 $(INC)
CXX := g++
SRC := $(shell find . -name '*.cc' ! -path '*/samples/*')
OBJ := $(SRC:%.cc=$(BUILD)/%.o)
DEP := $(OBJ:.o=.d)
EXE := $(OBJ:.o=)

all: directories $(OBJ) samples

directories:
	mkdir -p $(BUILD)

$(BUILD)/%.o: %.cc
	-$(CXX) -c $< $(CXXFLAG) -MMD -MP -o $@
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

samples:
	cd samples && make

-include $(DEP)

.PHONY: directories all clean samples

clean:
	for n in $(EXE); do \
                rm $$n* 2>/dev/null || true;  \
        done
	cd samples && make clean

