#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

	int arr0[4] = {7,2,3,4};
	int *p1 = arr0;

	// pointer section
	
	cout << "**** test 1 ****" << endl;

	cout << "p1 = " << p1 << endl;
	cout << "arr0 = " << arr0 << endl;
	cout << "*p1 = " << *p1 << endl;
	cout << "&arr0[3] = " << &arr0[3] << endl;

	cout << "p1 + 3 = " << p1 + 3 << endl;
	cout << "p1[3] = " << p1[3] << endl;
	cout << "*(p1 + 3) = " << *(p1 + 3) << endl;
	cout << "*p1 + 3 = " << *p1 + 3 << endl;

	// int *p2 = &arr0 --- error: cannot convert int (*)[4] to int* in initialization
	int (*p2)[4] = &arr0;

	cout << "**** test 2 ****" << endl;

	cout << "p2 = " << p2 << endl;
	cout << "*p2 = " << *p2 << endl;
	cout << "p2 + 0 = " << p2 + 0 << endl;
	cout << "*(p2 + 0) = " << *(p2 + 0) << endl;
	cout << "p2[0] = " << p2[0] << endl;
	cout << "(*p2)[0] = " << (*p2)[0] << endl;
	cout << "((*p2) + 0) = " << ((*p2) + 0) << endl;
	cout << "*(*p2) = " << *(*p2) << endl;

	cout << "**** test 3 ****" << endl;

	int arr1[3][4] = {
		{0,1,2,3},
		{4,5,6,7},
		{8,9,10,11}
	};

	int (*p3)[4] = arr1;

	cout << "arr1 = " << arr1 << endl;
	cout << "p3 = " << p3 << endl;
	cout << "p3 + 0 = " << p3 + 0 << endl;
	cout << "*p3 = " << *p3 << endl;
	cout << "*(p3 + 0) = " << *(p3 + 0) << endl;
	cout << "p3[0] = " << p3[0] << endl;
	cout << "(*p3)[1] = " << (*p3)[1] << endl; // (*p3)[1] == *((*p3) + 1)
	cout << "p3 + 1 = " << p3 + 1 << endl;
	cout << "*p3 + 1 = " << *p3 + 1 << endl;
	cout << "*(*p3 + 1) = " << *(*p3 + 1) << endl;
	cout << "*(p3 + 1) = " << *(p3 + 1) << endl;
	cout << "*(*(p3 + 1)) = " << *(*(p3 + 1)) << endl;

	cout << "**** test 4 ****" << endl;

	for (auto p = arr1; p != arr1 + 3; ++p) {
		for (auto q = *p; q != *p + 4; ++ q)
			cout << *q << " ";
		cout << endl;
	}

	cout << "**** test 5 ****" << endl;

	for (auto p = begin(arr1); p != end(arr1); ++ p) {
		for (auto q = begin(*p); q != end(*p); ++ q)
			cout << *q << " ";
		cout << endl;
	}

	cout << "**** test 6 ****" << endl;

	using int_array = int[4];

	for (int_array *p = arr1; p != arr1 + 3; ++p) {
		for (int *q = *p; q != *p + 4; ++q)
			cout << *q << " ";
		cout << endl;
	}

	/*
	cout << "**** test 7 ****" << endl;

	for (auto row: arr1) {
		for (auto col: row) // there is no BEGIN & END for int * in the for range loop
			cout << col << " ";
		cout << endl;
	}
	*/

	// reference section

	cout << "**** test 8 ****" << endl;

	for (auto &row : arr1) {
		for (auto col: row)
			cout << col << " ";
		cout << endl;
	}

	cout << "**** test 9 ****" << endl;

	for (auto &row : arr1) {
		for (auto &col: row) {
			col = col * 2;
			cout << col << " ";
		}
		cout << endl;
	}

	return 0;

}
