#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=build
CXXFLAG=-std=c++20
CXX=g++
DEPS=include
OBJ=6_3.o 6_4.o 6_5.o 6_10.o 6_11.o 6_12.o 6_14a.o 6_14b.o 6_17a.o 6_17b.o 6_21.o 6_22.o 6_23.o 6_25.o 6_26.o \
    6_27.o 6_30.o 6_33.o 6_38.o 6_42.o 6_44.o 6_47.o 6_51.o 6_54.o 6_55.o 
OBJ_OTR=6_9_fact.o 6_9_factmain.o

PREFIX_BUILD_OBJ=$(addprefix $(BUILD)/, $(OBJ))
PREFIX_BUILD_OBJ_OTR=$(addprefix $(BUILD)/, $(OBJ_OTR))

STRIP_O=$(PREFIX_BUILD_OBJ:%.o=%)
STRIP_OTR_O=$(PREFIX_BUILD_OBJ_OTR:%.o=%)

all: directories $(PREFIX_BUILD_OBJ) $(BUILD)/6_9_factmain samples

directories:
	$(MKDIR_P) $(BUILD)

$(BUILD)/%.o: %.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG) -I$(DEPS)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG) -I$(DEPS)

$(BUILD)/6_9_fact.o: 6_9_fact.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)

$(BUILD)/6_9_factmain.o: 6_9_factmain.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)

$(BUILD)/6_9_factmain: $(BUILD)/6_9_fact.o $(BUILD)/6_9_factmain.o $(DEPS)
	-$(CXX) -o $@ $(BUILD)/6_9_fact.o $(BUILD)/6_9_factmain.o $(CXXFLAG)

.PHONY: directories all samples clean

samples: 
	cd samples && make

clean:
	for n in $(STRIP_O); do \
	  rm $$n* 2>/dev/null || true;  \
	done
	for n in $(STRIP_OTR_O); do \
	  rm $$n* 2>/dev/null || true;  \
	done
	cd samples && make clean
