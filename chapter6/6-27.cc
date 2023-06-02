#include <iostream>
#include <initializer_list>
using namespace std;

int get_sum(initializer_list<int> const& values) {
    int sum = 0;
    for (auto value : values) {
        sum += value;
    }

    return sum;
}

int main() {
    cout << "The sum of 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 is: "
         << get_sum({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) << endl;

    return 0;
}
