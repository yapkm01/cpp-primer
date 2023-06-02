#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector <int> v1 {5, 4, 8, 9};
	vector <int>::iterator it1;
	it1 = v1.begin();
	it1++;

	for (auto it = v1.begin(); it != v1.end(); it++)
		cout << *it << " ";
	cout << "\n";

	v1.erase(it1);

	for (auto it = v1.begin(); it != v1.end(); it++)
		cout << *it << " ";
	cout << "\n";

	vector <int> v2 {5, 4, 8, 9, 7};
	vector <int>::iterator it2;

	auto it2_start = v2.begin();
	auto it2_end = v2.end();
	it2_start++;
	it2_end--;

	for (auto it = v2.begin(); it != v2.end(); it++)
		cout << *it << " ";
	cout << "\n";

	v2.erase(it2_start, it2_end);

	for (auto it = v2.begin(); it != v2.end(); it++)
		cout << *it << " ";
	cout << "\n";

	return 0;

}
