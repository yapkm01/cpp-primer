#include <iostream>
#include <vector>
using namespace std;

bool compare(const int *p1b, const int *p1e, const int *p2b, const int *p2e) {
	if ((p1e - p1b) != (p2e - p2b))
		return false;
	for ( ; p1b != p1e & p2b != p2e; ++p1b, ++p2b)
		if (*p1b != *p2b) 
			return false;
	return true;
}

int main() {
	int arr1[] = {1,2,3};
	int arr2[] = {1,2,4};

	if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
		cout << "array match" << endl;
	else cout << "array not match" << endl;

	vector <int> v1 = {1,2,3};
	vector <int> v2 = {2,2,3};

	if (v1 == v2)
		cout << "vector match" << endl;
	else cout << "vector not match" << endl;
}
