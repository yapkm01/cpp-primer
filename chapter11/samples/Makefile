
#
# General Makefile
#

BUILD=../build
CXXFLAG=-std=c++20
CXX=g++
DEPS=../include
OBJ=

all: $(OBJ)

%.o: %.cc $(DEPS)
	mkdir -p $(BUILD)
	-$(CXX) -c $< -o $(BUILD)/$@ $(CXXFLAG) -I$(DEPS)
	-$(CXX) -o $(BUILD)/$(patsubst %.o,%,$@) $(BUILD)/$@ $(CXXFLAG) -I$(DEPS)

.PHONY: all

clean:
	find $(BUILD) -type f |grep "lambda" |xargs rm -f
