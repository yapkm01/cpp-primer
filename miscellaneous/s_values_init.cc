#include <string>
#include <vector>
#include <iostream>
using namespace std;
 
struct T1 { // no ctor
    int mem1;
    string mem2;
};

struct T2 { // a ctor, but no default
    int mem1;
    string mem2;
    T2(const T2 &) {}
};

struct T3 { // user-provided default ctor
    int mem1;
    string mem2;
    T3() {
	 cout << "T3 user-provided default ctor" << endl;
    }
};
 
struct T4 { // user-provided default ctor
    int mem1;
    T3 t3;
    T4() {
	 cout << "T4 user provided default ctor" << endl;
    }
};

string s{}; // calls default ctor, the value is "" (empty string)

int arr[5];

int main() {

    cout << "=1= " << s.size() << endl;

    vector<int> v(3); // value-initializes three ints
    cout << "=2= " << v[2] << endl;

    int n{}; // non-class value-init, value is 0
    double f = double(); // non-class value-init, value is 0.0
    cout << "=3= " << n << ' ' << f << endl;

    int* a = new int[10]; // array of 10 value is indeterminate
    int* b = new int[10](); // array of 10 zeroes
    cout << "=4= " << a[1] << ' ' << b[1] << endl;

    int foo[5];
    int bar[5] = {1, 2, 3};
    cout << "=5= " << foo[4] << ' ' << bar[4] << endl;
 
    T1 t1{}; // no ctors: zero-initialized
             // t1.mem1 is zero-initialized
             // t1.mem2 is default-initialized
    cout << "=6= " << t1.mem1 << ' ' << t1.mem2 << endl;

//  T2 t2{}; // error: has a ctor, but no default ctor

    T3 t3{}; // user-defined default ctor:
             // t3.mem1 is default-initialized (the value is indeterminate)
             // t3.mem2 is default-initialized
    cout << "=7= " << t3.mem1 << ' ' << t3.mem2 << endl;

    T4 t4{};
    cout << "=8= " << t4.mem1 << ' ' << t4.t3.mem1 << endl;

    delete[] a;
    return 0;
}
