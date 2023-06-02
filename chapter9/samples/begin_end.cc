#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> vc{1, 2, 3};
	// size_type synonym to size_t
	vector <int>::size_type v_sizetype = vc.size();
	cout << "elements of vector vc :- ";
	for (auto iter=vc.cbegin(); iter != vc.cend(); iter++)
		cout << *iter << " ";
	cout << endl << "size of vector vc :- " << v_sizetype << endl;

	// using free function
	int ar[5] = {10, 20, 30}; // remaining value initialized
	cout << "elements of array ar :- ";
	for (auto i = cbegin(ar); i != cend(ar); i++)
		cout << *i << " ";
	cout << endl;

	return 0;
}
