#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
using Families = map<string, vector<string>>;

auto make_families() {
    Families families;
    for (string ln; cout << "Last name:\n", cin >> ln && ln != "@q";)
        for (string cn; cout << "|-Children's names:\n", cin >> cn && cn != "@q";)
            families[ln].push_back(cn);
    return families;
}

auto print(const Families& families) {
    for (const auto& family : families) {
        cout << family.first << ":\n";
        for (const auto& child : family.second)
            cout << child << " ";
        cout << "\n";
    }
}

int main() {
    print(make_families());
    return 0;
}
