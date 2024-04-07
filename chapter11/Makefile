#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=build
CXXFLAG=-std=c++20
CXX=g++
DEPS=include
OBJ=11_3.o 11_4.o 11_7.o 11_8.o 11_9.o 11_10.o 11_11.o 11_12.o 11_13.o 11_14.o 11_16.o

PREFIX_OBJ=$(addprefix build/, $(OBJ))

all: directories $(PREFIX_OBJ) samples

directories:
	$(MKDIR_P) $(BUILD)

$(BUILD)/%.o: %.cc ${DEPS}
	-$(CXX) -c $< -o $@ $(CXXFLAG) -I$(DEPS)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG) -I$(DEPS)

.PHONY: directories all samples clean

samples: 
	cd samples && make

clean:
	find $(BUILD) -type f -not -path "./samples/*" |grep -Ev "cc$$|md$$|txt$$|h$$|Makefile|lambda" |xargs rm -f 
	cd samples && make clean
