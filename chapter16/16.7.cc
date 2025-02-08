/*
 * Exercise 16.7:
 * Write a constexpr template that returns the size of a given array.
 */

#include <iostream>
using namespace std;

template <typename T, unsigned N>
constexpr unsigned array_size(T (&arr)[N]) {
	return N;
}

int main() {
	int a[10];
	double d[7];
	char e[] = "Hello, World!";
	cout << array_size(a) << '\n';
	cout << array_size(d) << '\n';
	cout << array_size(e) << '\n';
	return 0;
}
