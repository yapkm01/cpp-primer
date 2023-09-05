#include <iostream>
#include <vector> 
using namespace std;

class NoDefault {
public:
	NoDefault(int i): _i(i) {}
	int getI() const { 
	    return _i;
	}

private:
	int _i;
};

class C {
public:
    C() : nd(0) {}
    NoDefault getNoDefault() const {
	    return this -> nd;
    }
    	
private:
    NoDefault nd;
};

int main() {
    C c;
    cout << c.getNoDefault().getI() << endl;
    // failed due to initialization error
    // vector <NoDefault> vec(10);
    return 0;
}
