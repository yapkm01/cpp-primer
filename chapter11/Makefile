#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=build
CXXFLAG=-std=c++20
CXX=g++
DEPS=include
OBJ=11_3.o 11_4.o 11_7.o 11_8.o 11_9.o 11_10.o 11_11.o 11_12.o 11_13.o 11_14.o 11_16.o 11_20.o 11_21.o 11_23.o 11_26.o \
    11_31.o 11_32.o 11_33.o 11_38.o

PREFIX_BUILD_OBJ=$(addprefix $(BUILD)/, $(OBJ))
STRIP_O=$(PREFIX_BUILD_OBJ:%.o=%)

all: directories $(PREFIX_BUILD_OBJ) samples

directories:
	$(MKDIR_P) $(BUILD)

$(BUILD)/%.o: %.cc ${DEPS}
	-$(CXX) -c $< -o $@ $(CXXFLAG) -I$(DEPS)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG) -I$(DEPS)

.PHONY: directories all samples clean

samples: 
	cd samples && make

clean:
	for n in $(STRIP_O); do \
	  rm $$n* 2>/dev/null || true;  \
	done
	cd samples && make clean
