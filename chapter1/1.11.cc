/*
 * Exercise 1.11:
 * Write a program that prompts the user for two integers. Print
 * each number in the range specified by those two integers.
 */

#include <iostream>
using namespace std;

int main() {
	int start, end;
	cout << "Enter two integers to print numbers within range: ";
	cin >> start >> end;
	while (start <= end)
		cout << start++ << " ";
	cout << endl;
	return 0;
}
