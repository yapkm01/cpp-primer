
# General Makefile
#

BUILD=../build
CXXFLAG=-std=c++20 -I.
CXX=g++
DEPS=../include
OBJ=iostate.o iotie.o

PREFIX_OBJ=$(addprefix $(BUILD)/, $(OBJ))

$(BUILD)/%.o: %.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

all: $(PREFIX_OBJ)

.PHONY: all clean

clean:
	find . -type f |grep -Ev "cc$$|h$$|Makefile" |xargs rm -f

