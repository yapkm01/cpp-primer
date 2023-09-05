#
# General Makefile
#

.PHONY: all clean

all: 
	cd chapter1 && make
	cd chapter2 && make
	cd chapter3 && make
	cd chapter4 && make
	cd chapter5 && make
	cd chapter6 && make
	cd chapter7 && make
	cd chapter8 && make
	cd chapter9 && make
	cd chapter10 && make
	cd miscellaneous && make

clean:
	cd chapter1 && make clean
	cd chapter2 && make clean
	cd chapter3 && make clean
	cd chapter4 && make clean
	cd chapter5 && make clean
	cd chapter6 && make clean
	cd chapter7 && make clean
	cd chapter8 && make clean
	cd chapter9 && make clean
	cd chapter10 && make clean
	cd miscellaneous && make clean
