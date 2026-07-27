Instruction on creating a shared object and its usage
=====================================================

1. Create a position independent code for math_utils_fnc.cc

$ g++ -std=c++20 -c -fPIC math_utils_fnc.cc -o ../build/math_utils_fnc.o

2. Create a shared object libmath_utils_fnc.so

$ g++ -std=c++20 -shared -o ../build/libmath_utils_fnc.so ../build/math_utils_fnc.o

3. Compile main program math_utils_using_so.cc

$ g++ -std=c++20 -c math_utils_using_so.cc -o ../build/math_utils_using_so.o -I../include

4. Use the shared object libmath_utils_fnc.so in math_utils_using_so.cc

$ g++ -std=c++20 -o ../build/math_utils_using_so ../build/math_utils_using_so.o -L../build -lmath_utils_fnc

5. Export library path to LD_LIBRARY_PATH

$ export LD_LIBRARY_PATH=./../build
