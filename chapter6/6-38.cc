#include <iostream>
using namespace std;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd)& arrRef(int i) {
    return (i % 2) ? odd : even; // returns a reference to the array
}

int main() {
    // Test with even numbers
    cout << arrRef(2) << endl;
    cout << arrRef(2)[2] << endl;
    // Test with odd numbers
    cout << arrRef(3) << endl;
    cout << arrRef(3)[2] << endl;
	
    return 0;
}
