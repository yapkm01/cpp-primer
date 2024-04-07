#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> exclude = { "aa", "bb", "cc", "dd", "ee", "ff", "bb", "dd" };
    for (string word; cout << "Enter plz:\n", cin >> word; ) {
        auto is_excluded = binary_search(exclude.cbegin(), exclude.cend(), word);
        auto reply = is_excluded ? "excluded" : "not excluded";
        cout << reply << endl;
    }

    return 0;
}
