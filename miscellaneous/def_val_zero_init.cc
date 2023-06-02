#include <iostream>
#include <vector> 
using namespace std;

class NoDefault {
public:
//	NoDefault() { cout << "NoDefault() ctor" << endl; }
	NoDefault(int i): _i(i) { cout << "NoDefault(int) : _i(nt) ctor" << endl; }
    	int getI() const { 
	    return _i;
    	}

private:
    	int _i;
};

class C {
public:
//	C() { cout << "C() ctor" << endl; }
	C() : nd(0) { cout << "C() : nd(int) ctor" << endl; }
	NoDefault getNoDefault() const {
	    return this -> nd;
    	}
    	
private:
    	NoDefault nd;
};

int main() {
	C c;
//	C c{};
	cout << c.getNoDefault().getI() << endl;
	return 0;
}
