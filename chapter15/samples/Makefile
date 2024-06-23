#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=../build
CXXFLAG=-std=c++20
CXX=g++
DEPS=../include
OBJ=xcess_specifiers_inheritance.o

PREFIX_BUILD_OBJ=$(addprefix $(BUILD)/, $(OBJ))
STRIP_O=$(PREFIX_BUILD_OBJ:%.o=%)

all: directories $(PREFIX_BUILD_OBJ)

directories:
	$(MKDIR_P) $(BUILD)

$(BUILD)/%.o: %.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG) -I$(DEPS)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG) -I$(DEPS)

.PHONY: directories all clean

clean:
	for n in $(STRIP_O); do \
	  rm $$n* 2>/dev/null || true;  \
	done
