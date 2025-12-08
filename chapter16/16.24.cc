/*
 * Exercise 16.24:
 * Add a constructor that takes two iterators to your Blob template.
 */

#include "16.24.h"
#include <iostream>
using namespace std;

int main() {
	Blob<int> b1 {1,2,3};
	Blob<int> b2 {1,2,3};
	if (b1 == b2)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
	return 0;
}
