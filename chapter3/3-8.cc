#include <iostream>
#include <string>
using namespace std;

int main() {
    string str("a simple string");

    // while
    decltype(str.size()) i = 0;
    while (i < str.size()) str[i++] = 'X';
    cout << str << endl;

    // for
    for (i = 0; i < str.size(); str[i++] = 'X');
    cout << str << endl;

    // range for is simplest
    return 0;
}
