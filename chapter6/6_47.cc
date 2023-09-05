#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int>::const_iterator cbeg,
                  vector<int>::const_iterator cend) {
    if (cbeg != cend) {
#ifndef NDEBUG
        cout << "Vector size: " << (cend - cbeg) << endl;
#endif
        cout << *cbeg << endl;
        print_vector(++cbeg, cend);
    }
}

int main() {
    vector<int> test_vector = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    print_vector(test_vector.cbegin(), test_vector.cend());

    return 0;
}
