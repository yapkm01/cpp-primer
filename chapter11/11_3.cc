
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
using Map = map<string, size_t>;

auto count() {
    Map counts;
    for (string w; cin >> w; ++counts[w]);
    return counts;
}

auto print(const Map& m) {
    for (const auto& kv : m)
        cout << kv.first << " : " << kv.second << "\n";
}

int main() {
    cout << "Enter a few words please:\n";
    print(count());
    return 0;
}
