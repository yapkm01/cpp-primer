#include <iostream>
using namespace std;

int main() {
    cout << "How long do you want the string? ";
    int size {0};
    cin >> size;
    char *input = new char[size+1]();
    cin.ignore();
    cout << "input the string: ";
    cin.get(input, size+1);
    cout << input << endl;
    delete [] input;

    // Test: if longer than the array size, we will lose the characters which are out of range.
    
    return 0;
}
