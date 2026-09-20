/*
 * Exercise 3.2:
 * Write a program to read the standard input a line at a time.
 * Modify your program to read a word at a time.
 */

#include <iostream>
using namespace std;

int main() {
	// for (string str; getline(cin, str); cout << str << endl);
	for (string str; cin >> str; cout << str << endl);
	return 0;
}
