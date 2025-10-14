#
# General Makefile
#

BUILD := build
INC := -Iinclude
CXXFLAG := -std=c++20 $(INC)
CXX := g++
SRC := $(shell find . -name '*.cc')
OBJ := $(SRC:%.cc=$(BUILD)/%.o)
DEP := $(OBJ:.o=.d)
EXE := $(OBJ:.o=)

all: directories $(OBJ)

directories:
	mkdir -p $(BUILD)

$(BUILD)/%.o: %.cc
	-$(CXX) -c $< $(CXXFLAG) -MMD -MP -o $@
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

-include $(DEP)

.PHONY: directories all clean

clean:
	for n in $(EXE); do \
                rm $$n* 2>/dev/null || true;  \
        done

