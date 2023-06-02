// read two strings and report whether the strings have the same length
// If not, report which is longer

#include <iostream>
#include <string>
using namespace std;

int main() {
    for (string str1, str2; cin >> str1 >> str2;/* */) {
        if (str1.size() == str2.size())
            cout << "The two strings have the same length." << endl;
        else
            cout << "The longer string is " << ((str1.size() > str2.size()) ? str1 : str2) << endl;
    }

    return 0;
}
