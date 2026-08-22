/*
 * Exercise 3.1:
 * Rewrite the exercises from § 1.4.1 (p. 13) and § 2.6.2 (p. 76)
 * with appropriate using declarations.
 *
 * Exercise 1.9:
 * Write a program that uses a while to sum the numbers from 50 to 100
*/

#include <iostream>
using namespace std;

int main() {
	int sum = 0, val = 50;
	while (val <= 100)
		sum += val++;
	cout << "Sum of 50 to 100 inclusive is " << sum << endl;
	return 0;
}
