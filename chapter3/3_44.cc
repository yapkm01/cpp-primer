#include <iostream>
using namespace std;

int main () {

	int ia [3][4] =  {
			    {0, 1, 2, 3}, 
			    {4, 5, 6, 7},  
			    {8, 9, 10, 11}  
			 };

	using int_array = int[4];

	cout << "range for without reference in nested loop:" << endl;
	for (int_array& row  : ia) {
		for (int col : row)
			cout << col << " ";
		cout << endl;
	}

	cout << "range for with reference in nested loop:" << endl;
	for (int_array& row : ia) {
		for (int& col : row)
			cout << col << " ";
		cout << endl;
	}

	cout << "for loop using pointers:" << endl;
	for (int_array (*p) = ia; p != ia + 3; ++p) {
		for (int* q = *p; q != *p + 4; ++q)
			cout << *q << " ";
		cout << endl;
	}

	return 0;

}
