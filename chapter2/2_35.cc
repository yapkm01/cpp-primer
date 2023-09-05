#include <typeinfo>
#include <iostream>
using namespace std;

int main() {
	const int i = 42;
	auto j = i;  // j is int (top-level const i is dropped)
	cout << "j = " <<  typeid(j).name() << endl;

	const auto &k = i; // k is const int & bound to i. top-level const ignored by typeid
	cout << "k = " << typeid(k).name() << endl;

	auto *p = &i; // p is const int *
	cout << "p = " << typeid(p).name() << endl;

	const auto j2 = i, &k2 = i;  // j2 is int. top-level const ignored by typeid 
				     // k2 is const int &. low level const reference ignored by typeid

	cout << "j2 = " << typeid(j2).name() << endl;
	cout << "k2 = " << typeid(k2).name() << endl;

    	return 0;
}
