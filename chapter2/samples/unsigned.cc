#include <iostream>
using namespace std;

int main() {
	// test1
	unsigned u = 10;
	int i = -42;
	cout << i + i << endl;
	cout << u + i << endl;

	unsigned u1 = 42, u2 = 10;
	cout << u1 - u2 << endl;
	cout << u2 - u1 << endl;

 	for (unsigned u3 = 10; u3 >= 0; --u3)
	    cout << u3 << endl;
	return 0;
}
