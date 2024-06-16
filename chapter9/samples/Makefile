#
# General Makefile
#

MKDIR_P=mkdir -p
BUILD=../build
CXXFLAG=-std=c++20
CXX=g++
DEPS=../include
OBJ=capacity.o value_type.o c_array.o begin_end.o size_related_ctor.o std_array.o swap.o assign_mbr_func.o \
    vector_insert.o vector_emplace.o vector_erase.o forward_list.o refresh_iter.o string_insert.o string_find.o \
    string_compare.o

PREFIX_BUILD_OBJ=$(addprefix $(BUILD)/, $(OBJ))
STRIP_O=$(PREFIX_BUILD_OBJ:%.o=%)

all: directories $(PREFIX_BUILD_OBJ)

directories:
	$(MKDIR_P) $(BUILD)

$(BUILD)/%.o: %.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG) -I$(DEPS)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG) -I$(DEPS)

.PHONY: directories all clean

clean:
	for n in $(STRIP_O); do \
	  rm $$n* 2>/dev/null || true;  \
	done
