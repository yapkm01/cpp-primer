#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=build
CXXFLAG=-std=c++20
CXX=g++
DEPS=include
OBJ=def_val_zero_init.o s_values_init.o use_hello_world
SHARED_OBJ=hello_world

PREFIX_BUILD_OBJ=$(addprefix $(BUILD)/, $(OBJ))
STRIP_O=$(PREFIX_BUILD_OBJ:%.o=%)

all: directories $(PREFIX_BUILD_OBJ)

directories:
	$(MKDIR_P) $(BUILD)

$(BUILD)/%.o: %.cc
	-$(CXX) -c -o $@ $< $(CXXFLAG)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

$(BUILD)/use_hello_world.o: use_hello_world.cc
	-$(CXX) -c -o $@ $< $(CXXFLAG)

$(BUILD)/hello_world.o: hello_world.cc
	-$(CXX) -c -o $@ $< $(CXXFLAG) -I$(DEPS)
	-$(CXX) -shared -o $(patsubst $(BUILD)/%.o,$(BUILD)/lib%,$@).so $@ $(CXXFLAG) -I$(DEPS)

$(BUILD)/use_hello_world: $(BUILD)/use_hello_world.o $(BUILD)/hello_world.o $(DEPS)
	-$(CXX) -o $@ $< -L$(BUILD) -Wl,-rpath=$(BUILD) -Wall -l$(SHARED_OBJ) $(CXXFLAG)

.PHONY: directories all clean

clean:
	rm $(BUILD)/* 2>/dev/null || true;
