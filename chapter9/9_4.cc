#include <vector>
#include <iostream>
using namespace std;

bool contains(vector<int>::const_iterator first, vector<int>::const_iterator last, int value) {
	for (; first != last; ++first)
		if (*first == value) return true;
	return false;
}

int main() {
	vector<int> vi {1, 2, 3, 4};
	int k = 5;
	cout << contains(vi.cbegin(), vi.cend(), k) << endl;

	return 0;
}
