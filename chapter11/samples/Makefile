
#
# General Makefile
#

BUILD=../build
CXXFLAG=-std=c++20
CXX=g++
DEPS=../include
OBJ=

PREFIX_OBJ=$(addprefix $(BUILD)/, $(OBJ))

all: $(PREFIX_OBJ)

$(BUILD)/%.o: %.cc $(DEPS)
	-$(CXX) -c $< -o $(BUILD)/$@ $(CXXFLAG) -I$(DEPS)
	-$(CXX) -o $(BUILD)/$(patsubst %.o,%,$@) $(BUILD)/$@ $(CXXFLAG) -I$(DEPS)

.PHONY: all clean

clean:
	find $(BUILD) -type f |grep "lambda" |xargs rm -f
