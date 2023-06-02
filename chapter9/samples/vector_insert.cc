#include <iostream>
#include <vector>
#include <list>
using namespace std;

void print(const vector <int>& vi) {
	// using range-for loop
	for (auto& i : vi)
		cout << i << " ";
	cout << endl;
}

int main() {
	vector <int> v1 {1, 2, 3, 4};
	list <int> l1 {99, 88, 77};
	cout << "before v1 :- ";
	print(v1);

	// insert value 100 at position 2
	v1.insert(v1.begin() + 2, 100);
	cout << "after insert value 100 :- ";
	print(v1);

	// insert value 10 value=200 at the end of v1
	v1.insert(v1.end(), 10, 200);
	cout << "after insert 10 value 200 :- ";
	print(v1);

	list <int>::iterator it = l1.end();
	v1.insert(v1.end(), --(--l1.end()), l1.end());
	cout << "after insert last element from l1 :- ";
	print(v1);

	return 0;
}
