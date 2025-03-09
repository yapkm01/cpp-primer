/*
 * Exercise 16.12:
 * Write your own version of the Blob and BlobPtr templates. including the
 * various const members that were not shown in the text.
 */

#include "16.12.h"
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
