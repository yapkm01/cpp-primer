#include <iostream>
#include <stdexcept>
using namespace std;

int main(void) {
    int i, j;
    std::cin >> i >> j;
    if (j == 0)
        throw runtime_error("divisor is 0");
    cout << i / j << endl;

    return 0;
}
