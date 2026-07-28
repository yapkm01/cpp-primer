#
# General Makefile
#

BUILD := ../build
INC := -I../include
CXXFLAG := -std=c++20 $(INC)
CXX := g++
SRC := $(shell find . -name '*.cc')
OBJ := $(SRC:%.cc=$(BUILD)/%.o)
DEP := $(OBJ:.o=.d)
EXE := $(OBJ:.o=)

all: directories $(OBJ)

directories:
	mkdir -p $(BUILD)

$(BUILD)/./type_deduct_extern.o: $(BUILD)/./extern.o type_deduct_extern.cc
	-$(CXX) -c $(lastword $^) $(CXXFLAG) -MMD -MP -o $@
	-$(CXX) -o $(patsubst %.o,%,$@) $< $@ $(CXXFLAG)

$(BUILD)/./extern.o: extern.cc
	-$(CXX) -c $< $(CXXFLAG) -MMD -MP -o $@

$(BUILD)/./math_utils_fnc.o: math_utils_fnc.cc
	-$(CXX) -c $< -fPIC $(CXXFLAG) -MMD -MP -o $@
	-$(CXX) -shared -o $(patsubst %.cc,$(BUILD)/lib%.so,$<) $@

$(BUILD)/./math_utils_using_so.o: $(BUILD)/./math_utils_fnc.o math_utils_using_so.cc
	-$(CXX) -c $(lastword $^) $(CXXFLAG) -MMD -MP -o $@
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG) -L$(BUILD) -lmath_utils_fnc

$(BUILD)/%.o: %.cc
	-$(CXX) -c $< $(CXXFLAG) -MMD -MP -o $@
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

-include $(DEP)

.PHONY: directories all clean

clean:
	for n in $(EXE); do \
                rm $$n* 2>/dev/null || true;  \
        done
	rm $(BUILD)/*.so

