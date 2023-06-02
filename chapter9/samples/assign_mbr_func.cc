#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	vector <string> v1{"v1", "v2"};
	list <string> l1{"l1", "l2"};
	list <const char*> l2{"lc1", "lc2"};

	// l1 = v1; container type mismatch
	// l2 = l1; element type mismatch
	// l2.assign(v1.cbegin(), v1.cend()); cannot convert string to char* in the assign mbr func
	v1.assign(l2.cbegin(), l2.cend());

	for (auto iter=v1.cbegin(); iter != v1.cend(); iter++)
		cout << *iter << " ";
	cout << endl;

	return 0;
}
