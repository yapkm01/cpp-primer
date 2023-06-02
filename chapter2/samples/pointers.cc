#include <iostream>
using namespace std;

// global pointer - default initalization
int *ipg;

int main() {

	// print global pointer
	cout << ipg << endl;

	// uninitialized pointer
	int *ipu;
	cout << ipu << endl;

	// null pointer
	int *ipn = nullptr;
	cout << ipn << endl;

	int i = 20;
	int *ip1 = &i;
	int *ip2 = ip1;
	cout << i << " " << ip1 << " " << *ip1 << " " << ip2 << " " << *ip2 << endl;

	return 0;

}
