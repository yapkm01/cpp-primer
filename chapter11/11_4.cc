
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
using Map = map<string, size_t>;

auto strip(string& str) {
	for (auto& ch: str) ch = tolower(ch);
	auto it = remove_if(str.begin(), str.end(), [](const char& ch) {
							return ispunct(ch);
	});
	str.erase(it, str.end());
	return str;
}

auto strip_and_count() {
    Map counts;
    for (string w; cin >> w; ++counts[strip(w)]);
    return counts;
}

auto print(const Map& m) {
    for (const auto& kv : m)
        cout << kv.first << " : " << kv.second << "\n";
}

int main() {
    cout << "Enter a few words please:\n";
    print(strip_and_count());
    return 0;
}
