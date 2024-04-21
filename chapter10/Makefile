#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=build
CXXFLAG=-std=c++20
CXX=g++
DEPS=include
OBJ=10_1.o 10_2.o 10_3.o 10_4.o 10_5.o 10_6.o 10_7a.o 10_7b.o 10_9.o 10_11.o 10_13.o 10_16.o \
    10_18.o 10_19.o 10_20.o 10_21.o 10_22.o 10_24.o 10_25.o 10_27.o 10_28.o 10_29.o 10_30.o 10_31.o \
    10_33.o 10_34.o 10_35.o 10_36.o 10_37.o 10_42.o

PREFIX_OBJ=$(addprefix $(BUILD)/, $(OBJ))
OBJ_OTR=10_12.o 10_17.o 10_32.o
PREFIX_OBJ_OTR=$(addprefix build/, $(OBJ_OTR))

all: directories Sales_data $(PREFIX_OBJ) $(PREFIX_OBJ_OTR) samples

directories:
	$(MKDIR_P) $(BUILD)

Sales_data: Sales_data.cc $(DEPS)
	-$(CXX) -c $< -o $(BUILD)/$@.o $(CXXFLAG) -I$(DEPS)

$(filter $(BUILD)/%.o, $(PREFIX_OBJ_OTR)): $(BUILD)/%.o : %.cc $(DEPS)
	-$(CXX) -c $< -o $@ $(CXXFLAG) -I$(DEPS)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(BUILD)/Sales_data.o $(CXXFLAG) -I$(DEPS)

$(BUILD)/%.o: %.cc 
	-$(CXX) -c $< -o $@ $(CXXFLAG) 
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG) 

.PHONY: directories all samples clean Sales_data

samples: 
	cd samples && make

clean:
	find $(BUILD) -type f -not -path "./samples/*" |grep -Ev "cc$$|md$$|txt$$|h$$|Makefile|lambda" |xargs rm -f 
	cd samples && make clean
