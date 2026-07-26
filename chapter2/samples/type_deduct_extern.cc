#include <iostream>
#include "../include/extern.h"
using namespace std;

/* Compiler error: compiler has not seen the definitions of x and y. Hence we need to use trailing return type */
/* common_type_t<dectype(x), decltype(y)> add (int x, double y); */

auto add(int x, double y) -> common_type_t<decltype(x), decltype(y)>;

int main() {
	extern int xyz;// xyz is an extern int from extern.cpp
	cout << "xyz = " << xyz << endl;
	cout << "abc = " << abc << endl; // abc is an extern int from extern.h
	cout << "xyz_const = " << xyz_const << endl;  // xyz_const is an extern const int from extern.h
	
	const int& rr = 5; // rr is a const int reference
	const int& qq = rr;

	cout << add(5, 3.14) << endl;
	auto result = add(10, 2.5);
	cout << "typeid(result: " << typeid(result).name() << endl;

	auto a{1.23f}; // f suffix causes a to be deduced to float
	auto b{5u};  // us suffiex causes b to be deduced to unsigned int
	cout << "typeid(a): " << typeid(a).name() << endl;
	cout << "typeid(b): " << typeid(b).name() << endl;

	int p{5}; // p is an int
	const auto q{5};// q is a const int
	constexpr auto r{5}; // r is a constexpr int
	cout << "typeid(p): " << typeid(p).name() << endl;
	cout << "typeid(q): " << typeid(q).name() << endl;
	cout << "typeid(r): " << typeid(r).name() << endl;

	return 0;
}

auto add(int x, double y) -> double {
	return (x+y);
}
	
