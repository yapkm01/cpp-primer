/*
 * Exercise 1.10:
 * In addition to the ++ operator that adds 1 to its operand,
 * there is decrement operator (--) that subtracts 1. Use the decrement
 * operator to write a while that prints the numbers from ten down to zero.
 */

#include <iostream>
using namespace std;
int main() {
	int count = 11;
	while (count--)
		cout << "Count is " << count << endl;
	return 0;
}
