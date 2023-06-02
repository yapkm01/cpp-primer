#include <iostream>
using namespace std;

size_t count_add(int n) {     // n is a parameter.
    static size_t ctr = 0;    // ctr is a static variable.
    ctr += n;
    return ctr;
}

int main() {
    for (size_t i = 0; i != 10; ++i)  // i is a local variable.
      cout << count_add(i) << endl;
    return 0;
}
