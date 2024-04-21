#include <string>
#include <map>
#include <iostream>
using namespace std;

int main() {
    multimap<string, string> families;
    for (string lname, cname; cin >> cname >> lname; families.emplace(lname, cname));
    for (const auto& family : families)
        cout << family.second << " " << family.first << endl;
}
