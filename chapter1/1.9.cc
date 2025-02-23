/*
 * Exercise 1.9: 
 * Write a program that uses a while to sum the numbers from 50 to 100.
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
