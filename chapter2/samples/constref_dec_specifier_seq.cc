#include <iostream>
using namespace std;

int main() {
	const int x = 4,y = 2,& r1 = y; // the int const are decl-specifier-seq. therefore ok
	cout << r1 << endl;

	// fail due to const is a decl-specifier rather than part of a declarator
	// int m = 10, const int& r2 = m;
	return 0;
}
