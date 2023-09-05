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
    auto d = &i;   // d is an int* = address of i = 0
    auto e = &ci;  // e is a const int* = address of ci = 0
    auto& g = ci;  // g is a  const int& = reference to ci = 0

    std::cout << "Initial definitions & values:" << std::endl
	      << "auto a = " << typeid(a).name() <<  ". a = " << a << endl
	      << "auto b = " << typeid(b).name() <<  ". b = " << b << endl
	      << "auto c = " << typeid(c).name() <<  ". c = " << c << endl
	      << "auto d = " << typeid(d).name() <<  ". d = " << d << " (" << *d << ")" << endl
	      << "auto e = " << typeid(e).name() <<  ". e = " << e << " (" << *e << ")" << endl
	      << "auto g = " << typeid(g).name() <<  ". g = " << g << " (" << g << ")" << endl;

    a = 42;
    b = 42;
    c = 42;
    // d = 42;     // Illegal must be dereferenced first
    *d = 42;
    // e = 42;     // Illegal pointed to type is const int
    // g = 42;     // Illegal referenced type is const int

    std::cout << "After assignment:" << std::endl
	      << "auto a = " << typeid(a).name() <<  ". a = " << a << endl
	      << "auto b = " << typeid(b).name() <<  ". b = " << b << endl
	      << "auto c = " << typeid(c).name() <<  ". c = " << c << endl
	      << "auto d = " << typeid(d).name() <<  ". d = " << d << " (" << *d << ")" << endl
	      << "auto e = " << typeid(e).name() <<  ". e = " << e << " (" << *e << ")" << endl
	      << "auto g = " << typeid(g).name() <<  ". g = " << g << " (" << g << ")" << endl;

    return 0;

}
