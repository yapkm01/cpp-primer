#include <iostream>
#include "include/6_9.h"

int fact(int i) {
    if(i<0) {
	    std::runtime_error err("Input cannot be a negative number");
	    std::cout << err.what() << std::endl;
    }
    return i > 1 ? i * fact( i - 1 ) : 1;
}
