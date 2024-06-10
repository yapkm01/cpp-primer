#include <iostream>
#include <vector>
using namespace std;

int multiply(int x, int y) {
    return x * y;
}

int main() {
    typedef decltype(multiply)* FP;
    vector<FP> my_vec = {10, multiply};
    int multiplier = 5;

    for (auto func : my_vec) {
        static int counter = 1;
        cout << func(counter, multiplier) << endl;
        ++counter;
    }

    return 0;
}
