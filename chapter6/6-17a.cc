#include <iostream>
#include <string>
using namespace std;

bool hasUpperCase(const string &s) {
    for (auto letter : s) {
        if (isupper(letter)) {
            return true;
        }
    }
    return false;
}

int main() {
    cout << "Enter some text: ";
    string userInput;
    getline(cin, userInput);
    cout << "The text you entered has "
         << (hasUpperCase(userInput) ? "" : "no ")
         << "upper case characters." << endl;

    return 0;
}
