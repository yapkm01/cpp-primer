#include <map>
#include <string>
#include <iostream>
using namespace std;

int main() {
    map<string, size_t> counts;
    for (string word; cin >> word;)
        auto result = ++counts.insert({ word, 0 }).first->second;

    for (const auto& count : counts)
        cout << count.first << " " << count.second << ((count.second > 1) ? " times\n" : " time\n");

    return 0;
}
