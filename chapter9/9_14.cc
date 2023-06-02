#include <vector>
#include <list>
#include <string>
#include <iostream>
using namespace std;

int main() {
	std::list<const char*> l{"Mooophy", "pezy", "Queeuqueg"};
	std::vector<std::string> v;
	v.assign(l.cbegin(), l.cend());
	for (auto ptr : v)
		std::cout << ptr << std::endl;

	return 0;
}

