#include <iostream>
#include <vector>
using namespace std;

void print(const vector <int>& v) {
	for (auto iter=v.cbegin(); iter != v.end(); iter++)
		cout << *iter << " ";
	cout << endl;
}

int main() {
	vector <int> aVec1 {1, 2, 3, 4, 5};
	cout << "aVec1 before swap :- ";
	print(aVec1);

	vector <int> aVec2 {9, 8, 7, 6, 5};
	cout << "aVec2 before swap :- ";
	print(aVec2);

	swap(aVec1, aVec2);
	cout << "aVec1 after swap :- ";
	print(aVec1);
	cout << "aVec2 after swap :- ";
	print(aVec2);

	return 0;
}
