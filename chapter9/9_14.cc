#include <vector>
#include <list>
#include <string>
#include <iostream>
using namespace std;

int main() {
	list<const char*> l{"Mooophy", "pezy", "Queeuqueg"};
	vector<std::string> v;
	v.assign(l.cbegin(), l.cend());
	for (auto ptr : v)
		cout << ptr << std::endl;

	return 0;
}

