#include <iostream>
#include <string>
using namespace std;

void toLower(string &s) {
    for (auto& letter : s) {
        letter = tolower(letter);
    }
}

int main() {
    cout << "Enter some text: ";
    string userInput;
    getline(cin, userInput);
    toLower(userInput);
    cout << "Converted text: "
         << userInput << endl;

    return 0;
}
