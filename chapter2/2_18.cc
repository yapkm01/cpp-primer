#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 1;
	int *p1 = &a, *p2 = p1;
	cout << "before " <<  p1 << " " << *p1 << " " << p2 << " " << *p2 << endl;
// change the value of a pointer
	p1 = &b;
// change the value to which the pointer points
	*p2 = b;
	cout << "after " <<  p1 << " " << *p1 << " " << p2 << " " << *p2 << endl;
}
