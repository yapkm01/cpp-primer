/*
 * Exercise 2.35:
 * Determine the types deduced in each of the following
 * definitions. Once you’ve figured out the types, write a program to see
 * whether you were correct.
 *
 *		const int i = 42;
 *		auto j = i; const auto &k = i; auto *p = &i;
 *		const auto j2 = i, &k2 = i;
 *
 * Answer:
 * auto j = i; const auto &k = i; auto *p = &i;
 *	j is an int; top-level const is dropped.
 * 	k is a const reference to a const int bound to i.
 * 	p is a pointer to a const int;
 *
 * const auto j2 = i, &k2 = i;
 * 	j2 is a const int; top-level const deduced
 *	k2 is a const reference to const int, bound to i
 */

#include <typeinfo>
#include <iostream>
using namespace std;

int main() {
	const int i = 42;
	auto j = i;
	cout << "typeid(j).name() = " <<  typeid(j).name() << endl;

	const auto& k = i;
	cout << "typeid(k).name() = " << typeid(k).name() << endl;

	auto* p = &i; // p is const int*
	cout << "typeid(p).name() = " << typeid(p).name() << endl;

	const auto j2 = i,& k2 = i;
	cout << "typeid(j2).name() = " << typeid(j2).name() << endl;
	cout << "typeid(k2).name() = " << typeid(k2).name() << endl;

    	return 0;
}
