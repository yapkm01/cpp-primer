/*
 * Exercise 16.6:
 * How do you think the library begin and end functions that
 * take an array argument work? Define your own versions of these functions.
 * array.
 *
 * They are function templates that take a typename parameter for the
 * array type and the function's return type. They also use nontype parameters
 * for the size of the array. The implementation: begin returns a pointer to
 * the first element, while end returns a pointer to one past the last element
 * of the array that was passed as an argument.
 */

#include <iostream>
using namespace std;

template <typename T, unsigned N>
T* begin_arr(T (&arr)[N]) {
	return arr;
}

template <typename T, unsigned N>
T* end_arr(T (&arr)[N]) {
	return &arr[N];
}

int main() {
	int a[5] = {1, 2, 3, 4, 5};
	double d[] = {9.3, 2.4, 36.90, 4.22, 22.7};

	auto a_first = begin_arr(a);
	auto a_last = end_arr(a);
	cout << *a_first << ' ';
	cout << *(a_last - 1) << '\n';

	auto d_first = begin_arr(d);
	auto d_last = end_arr(d);
	cout << *d_first << ' ';
	cout << *(d_last - 1) << '\n';
	return 0;
}
