/*
 * Exercise 2.8:
 * Using escape sequences, write a program to print 2M followed
 * by a newline. Modify the program to print 2, then a tab, then an M,
 * followed by a newline.
 */

#include <iostream>
using namespace std;

int main() {
	// 2M followed by a newline
	cout << "\062\115" << endl; 
	// 2, then a tab, then an M, followed by a newline
	cout << "\062\t\115\n"; 
	return 0;
}
