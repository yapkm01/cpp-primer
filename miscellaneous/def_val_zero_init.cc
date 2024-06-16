#include <iostream>
#include <vector> 
using namespace std;

struct foo {
    foo() = default;
    int a;
};

struct bar {
    bar();
    int b;
};

bar::bar() = default;

class NoDefault {

public:
//	NoDefault() { cout << "NoDefault() ctor" << endl; }
	NoDefault(int i): _i(i) { cout << "NoDefault(int) : (int) ctor" << endl; }
    	int getI() const {  return this -> _i; }

private:
    	int _i;

};

class C {

public:
//	C() { cout << "C() ctor" << endl; }
	C() : _x(9), _nd(10) { cout << "C() : (int), (int) ctor" << endl; }

	int getX() { return this -> _x; }
	NoDefault getNoDefault() const { return this -> _nd; }
    	
private:
	int _x;
    	NoDefault _nd;

};

int main() {
	foo a{};
    	bar b{};
    	cout << "a.a = " << a.a << ", b.b = " << b.b << endl;

	C c;
//	C c{};
	cout << "c.getX() = " << c.getX() << endl;
	cout << "c.getNoDefault().getI() = " <<  c.getNoDefault().getI() << endl;
	return 0;
}
