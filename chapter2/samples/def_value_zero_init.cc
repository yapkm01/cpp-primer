#include <iostream>
using namespace std;

// Rule of Thumb:
// a. Default initialization always use default constructor
// b. Value initialization will use zero initilization if there is no user-provided default constructor or deleted constructor provided. In zero initialization, members are set to its logical value of zero before any class default constructor are called.

class B {
public:
	B() { cout << "B() ctor" << endl; }
//	B(int i): _i(i) { cout << "B(int): (int) ctor" << endl; }
    	int getI() const {  return this -> _i; }
private:
    	int _i;
};

class C {
public:
//	C() { cout << "C() ctor" << endl; }
//	C() : _x(9), _b(10) { cout << "C(): (int), (int) ctor" << endl; }
	int getX() { return this -> _x; }
	B getB() const { return this -> _b; }
private:
	int _x=89;
    	B _b;
};

int main() {
	C c1;
	cout << "c1.getX() = " << c1.getX() << endl;
	cout << "c1.getB().getI() = " << c1.getB().getI() << endl;

	C c2{};
	cout << "c2.getX() = " << c2.getX() << endl;
	cout << "c2.getB().getI() = " << c2.getB().getI() << endl;

	return 0;
}
