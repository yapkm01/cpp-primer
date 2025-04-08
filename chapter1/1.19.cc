/*
 * Exercise 1.19:
 * Revise the program you wrote for the exercises in § 1.4.1 (p. 13)
 * that printed a range of numbers so that it handles input in which the
 * first number is smaller.
 */

#include <iostream>
using namespace std;

int main() {
	int start, end;

	cout << "Enter two integers to print numbers within range: ";
	cin >> start >> end;
	if (start >= end) {
		cerr << "Invalid range" << endl;
		return -1;
	}
	while (start <= end)
		cout << start++ << " ";
	cout << endl;
	return 0;
}
