#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=build
CXXFLAG=-std=c++20
CXX=g++
DEPS=include
OBJ=9_4.o 9_5.o 9_13.o 9_14.o 9_15.o 9_16.o 9_18.o 9_19.o 9_20.o 9_22.o 9_24.o 9_26.o 9_27.o 9_28.o 9_31a.o \
    9_31b.o 9_33.o 9_34.o 9_38.o 9_41.o 9_43.o 9_44.o 9_45.o 9_46.o 9_47a.o 9_47b.o 9_49.o 9_50.o 9_51.o 9_52.o

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
