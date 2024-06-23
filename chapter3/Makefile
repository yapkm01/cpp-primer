#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=build
CXXFLAG=-std=c++20
CXX=g++
DEPS=include
OBJ=3_2a.o 3_2b.o 3_4a.o 3_4b.o 3_5a.o 3_5b.o 3_6.o 3_7.o 3_8.o 3_10.o 3_14.o 3_15.o \
    3_16.o 3_17.o 3_19.o 3_20a.o 3_20b.o 3_21.o 3_22.o \
    3_23.o 3_24.o 3_25.o 3_31.o 3_32.o 3_35.o 3_36.o 3_39.o 3_40.o 3_41.o 3_42.o \
    3_43.o 3_44.o 3_45.o 

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
