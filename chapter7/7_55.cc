#include <string>
#include <iostream>
using namespace std;

struct Data {
    int ival;
    string s;
};

int main() {
    cout << boolalpha;
    cout << is_literal_type<Data>::value << endl;
    return 0;
}
