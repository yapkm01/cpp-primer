#include <iostream>
using namespace std;

int main() {

	int p = 10;
	double q = 2.2;
	const int& r1 = q;     // ok. temporary object created
	cout << "r1 = " << r1 << endl;

	return 0;

}
