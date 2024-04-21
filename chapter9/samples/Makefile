
# General Makefile
#

BUILD=../build
CXXFLAG=-std=c++20 -I.
CXX=g++
DEPS=../include
OBJ=capacity.o value_type.o c_array.o begin_end.o size_related_ctor.o std_array.o swap.o assign_mbr_func.o \
    vector_insert.o vector_emplace.o vector_erase.o forward_list.o refresh_iter.o string_insert.o string_find.o \
    string_compare.o

PREFIX_OBJ=$(addprefix $(BUILD)/, $(OBJ))

$(BUILD)/%.o: %.cc $(DEPS)
	-$(CXX) -c -o $@ $< $(CXXFLAG)
	-$(CXX) -o $(patsubst %.o,%,$@) $@ $(CXXFLAG)

all: $(PREFIX_OBJ)

.PHONY: all clean

clean:
	find . -type f |grep -Ev "cc$$|h$$|Makefile" |xargs rm -f

