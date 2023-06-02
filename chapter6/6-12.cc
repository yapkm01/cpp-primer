//  The version using reference is easier.
#include <iostream>
#include <string>
using namespace std;

void swap(int& lhs, int& rhs) {
    int temp = lhs;
    lhs = rhs;
    rhs = temp;
}

int main() {
    for (int left, right; cout << "Please Enter:\n", cin >> left >> right; ) {
        swap(left, right);
        cout << left << " " << right << endl;
    }

    return 0;
}
