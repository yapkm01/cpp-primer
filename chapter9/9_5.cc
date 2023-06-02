#include <vector>
#include <iostream>
using namespace std;

vector<int>::const_iterator find(vector<int>::const_iterator first, vector<int>::const_iterator last, int value) {
	for(; first != last; ++first)
		if (*first == value) return first;
	return last;
}

int main() {
	vector<int> vi {1, 2, 3, 4};
	vector<int>::const_iterator beg = vi.cbegin();
	vector<int>::const_iterator end = vi.cend();

	int k=8;
	if (find(beg, end, k) != end)
		cout << "found " << endl;
	else cout << "not found" << endl;
	return 0;
}
