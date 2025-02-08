/*
 * Exercise 16.2:
 * Write and test your own versions of the compare functions.
 */

#include <iostream>
#include <functional>
using namespace std;

template <typename T>
int compare (const T& v1, const T& v2) {
	if (less<T>()(v1, v2)) return -1;
	if (less<T>()(v2, v1)) return 1;
	return 0;
}

int main() {
	int x = 10, y = 20, z = 10;
	cout << compare(x, y) << '\n';
	cout << compare(y, x) << '\n';
	cout << compare(x, z) << '\n';
	return 0;
}
