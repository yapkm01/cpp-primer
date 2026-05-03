/* 
 * Exercise 2.34:
 * Write a program containing the variables and assignments from
 * the previous exercise. Print the variables before and after the assignments
 * to check whether your predictions in the previous exercise were correct. If
 * not, study the examples until you can convince yourself you know what led
 * you to the wrong conclusion.
 *
*/

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int& r = i;

    const int ci = i;
    const int& cr = ci;

    auto a = r;    // a is int = 0
    auto b = ci;   // b is int = 0
    auto c = cr;   // c is int = 0
    auto d = &i;   // d is an int* i.e. address of i
    auto e = &ci;  // e is a const int* i.e. address of ci
    auto& g = ci;  // g is a const int&

    cout << "initial:" << endl
	 << "typeid(a).name() = " << typeid(a).name() <<  ". a = " << a << endl
	 << "typeid(b).name() = " << typeid(b).name() <<  ". b = " << b << endl
 	 << "typeid(c).name() = " << typeid(c).name() <<  ". c = " << c << endl
	 << "typeid(d).name() = " << typeid(d).name() <<  ". d = " << d << ". *d = " << *d << endl
	 << "typeid(e).name() = " << typeid(e).name() <<  ". e = " << e << ". *e = " << *e << endl
	 << "typeid(g).name() = " << typeid(g).name() <<  ". g = " << g << endl;

    a = 42;
    b = 42;
    c = 42;
    d = 42;		// illegal conversion int* from int     
    e = 42;		// Illegal conversion const int* from int
    g = 42;		// illegal since object pointed to cannot be modified

    return 0;
}
