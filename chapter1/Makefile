#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=build
CXXFLAG=-std=c++20
CXX=g++
DEPS=include
OBJ=1_1.o 1_2.o 1_3.o 1_4.o 1_5.o 1_7.o 1_8.o 1_9.o 1_10.o 1_11.o 1_12.o 1_13a.o 1_13b.o 1_13c.o 1_15a.o 1_15b.o \
    1_16.o 1_18.o 1_19.o 1_20.o 1_21.o 1_22.o 1_23.o 1_24.o 1_25.o 

PREFIX_BUILD_OBJ=$(addprefix $(BUILD)/, $(OBJ))
STRIP_O=$(PREFIX_BUILD_OBJ:%.o=%)

all: directories $(PREFIX_BUILD_OBJ) samples

directories:
	$(MKDIR_P) $(BUILD)

$(BUILD)/%.o: %.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG) -I$(DEPS)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG) -I$(DEPS)

.PHONY: directories all samples clean

samples: 
	cd samples && make

clean:
	for n in $(STRIP_O); do \
	  rm $$n* 2>/dev/null || true;  \
	done
	cd samples && make clean
