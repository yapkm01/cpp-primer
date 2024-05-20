#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=build
CXXFLAG=-std=c++20 -I.
CXX=g++
DEPS=./include
OBJ=7_1.o 7_3.o 7_7.o 7_11.o 7_13.o 7_21.o 7_22.o 7_23.o 7_26.o 7_27.o 7_29.o 7_31.o 7_32.o 7_35.o 7_38.o 7_41.o \
    7_43.o 7_50.o 7_52.o 7_53.o 7_55.o 7_57.o

PREFIX_OBJ=$(addprefix $(BUILD)/, $(OBJ))

all: directories $(PREFIX_OBJ) samples

directories:
	$(MKDIR_P) $(BUILD)

$(BUILD)/%.o: %.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

.PHONY: directories all samples clean

samples: 
	cd samples && make

clean:
	find . -type f -not -path "./samples/*" |grep -Ev "cc$$|md$$|txt$$|h$$|Makefile" |xargs rm -f
	cd samples && make clean
