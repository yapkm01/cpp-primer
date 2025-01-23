#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=build
CXXFLAG=-std=c++20
CXX=g++
DEPS=include
OBJ=12_2.o 12_6.o 12_7.o 12_14.o 12_15.o 12_16.o 12_17.o 12_19.o 12_20.o 12_22.o 12_23.o 12_24.o 12_26.o 12_27.o 12_28.o \
    12_29.o 12_30.o 12_32.o 12_33.o

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
