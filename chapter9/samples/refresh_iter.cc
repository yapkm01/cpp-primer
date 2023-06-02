#include <vector>
#include <iostream>
using namespace std;

void print(auto v) {
	for (auto i: v)
		cout << i << " ";
	cout << endl;
}

int main() {
	vector <int> v {1, 2, 3, 4, 5, 6, 7, 8, 9};
	cout << "before .." << endl;
	print(v);
	auto iter = v.begin();
	while (iter != v.end()) {
		if (*iter % 2) {
			iter = v.insert(iter, *iter);
			iter+=2;
		} else {
			iter = v.erase(iter);
		}
	}
	cout << "after .." << endl;
	print(v);

	return 0;
}

