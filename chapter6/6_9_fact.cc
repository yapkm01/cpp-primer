#include <iostream>
#include "./include/6_9.h"
using namespace std;

int fact(int i) {
    if(i<0) {
        runtime_error err("Input cannot be a negative number");
        cout << err.what() << endl;
    }
    return i > 1 ? i * fact( i - 1 ) : 1;
}
