#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=build
CXXFLAG=-std=c++20
CXX=g++
DEPS=./include
OBJ=10_1.o 10_2.o 10_3.o 10_4.o 10_5.o 10_6.o 10_7a.o 10_7b.o 10_9.o 10_11.o 10_12.o 10_13.o 10_16.o \
    10_17.o 10_18.o 10_19.o 10_20.o 10_21.o 10_22.o 10_24.o 10_25.o 10_27.o 10_28.o 10_29.o 10_30.o 10_31.o
OBJ_OTR=10_12.o 10_17.o 10_32.o

all: directories Sales_data $(OBJ) $(OBJ_OTR) samples

directories: $(BUILD)

$(BUILD):
	$(MKDIR_P) $(BUILD)

Sales_data: Sales_data.cc $(DEPS)
	-$(CXX) -c $< -o $(BUILD)/$@.o $(CXXFLAG) -I$(DEPS)

$(filter %.o, $(OBJ_OTR)): %.o : %.cc
	-$(CXX) -c $< -o $(BUILD)/$@ $(CXXFLAG) -I$(DEPS)
	-$(CXX) -o $(BUILD)/$(patsubst %.o,%,$@) $(BUILD)/$@ $(BUILD)/Sales_data.o $(CXXFLAG) -I$(DEPS)

%.o: %.cc $(DEPS)
	-$(CXX) -c $< -o $(BUILD)/$@ $(CXXFLAG) -I$(DEPS)
	-$(CXX) -o $(BUILD)/$(patsubst %.o,%,$@) $(BUILD)/$@ $(CXXFLAG) -I$(DEPS)

.PHONY: directories all samples clean Sales_data

samples: 
	cd samples && make

clean:
	find $(BUILD) -type f -not -path "./samples/*" |grep -Ev "cc$$|md$$|txt$$|h$$|Makefile|lambda" |xargs rm -f 
	cd samples && make clean
