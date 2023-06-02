//reads a string of characters including punctuation and writes what was read but with the punctuation removed.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter a string of characters including punctuation." << endl;
    for (string s; getline(cin, s); cout << endl)
        for (auto i : s)
            if (!ispunct(i)) cout << i;
    cout << endl;

    return 0;
}
