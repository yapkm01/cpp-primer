#include <iostream>
#include <array>
using namespace std;

void sq(array <int,4> &ar) { // using reference
	for (auto iter=ar.begin(); iter != ar.end(); iter++)
		*iter = *iter * *iter;
}

void print(const array <int,4> ar) { // a copy instead of using reference
	for (auto iter=ar.begin(); iter != ar.end(); iter++)
		cout << *iter << " ";
	cout << endl;
}

int main() {
	array <int, 4> ar1 {1, 2, 3, 4};
	cout << "ar1 :- ";
	print(ar1);
	array ar2 {10, 20, 30, 40}; // inferred
	cout << "ar2 before squaring :- ";
	print(ar2);
	sq(ar2);
	cout << "ar2 after squaring :- ";
	print(ar2);
	ar2=ar1;
	cout << "ar2 after ar2=ar1 :- ";
	print(ar2);
	ar2 = {-1, -3};
	cout << "ar2 after ar2={-1,-3} :- ";
	print(ar2);
	cout << "ar2.at(1) :- " << ar2.at(1) << endl;

	return 0;
}
