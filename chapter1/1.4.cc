
/*
 * Exercise 1.4:
 * Our program used the addition operator, +, to add two numbers.
 * Write a program that uses the multiplication operator, *, to print the
 * product instead.
 */

#include <iostream>
using namespace std;

int main() {
	cout << "Enter two numbers:" << endl;
	int v1 = 0, v2 = 0;
	(cin >> v1) >> v2;
	cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2 << endl;
	return 0;
}
