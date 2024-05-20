
# General Makefile
#

BUILD=../build
CXXFLAG=-std=c++20 -I
CXX=g++
DEPS=../include
OBJ=async_callback_funcptr.o function_pointer local_static_var

PREFIX_OBJ=$(addprefix $(BUILD)/, $(OBJ))

all: $(PREFIX_OBJ)

$(BUILD)/%.o: %.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG) $(DEPS)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

.PHONY: all clean

clean:
	find . -type f |grep -Ev "cc$$|h$$|Makefile" |xargs rm -f

