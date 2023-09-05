#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
using namespace placeholders;

void elimdups(vector<string>& vs) {
    sort(vs.begin(), vs.end());
    vs.erase(unique(vs.begin(), vs.end()), vs.end());
}

bool check_size(const string& s, string::size_type sz) {
    return s.size() >= sz;
}

void biggies(vector<string>& words, vector<string>::size_type sz) {
    elimdups(words);
    auto iter = stable_partition(words.begin(), words.end(), bind(check_size, _1, sz));
    for_each(words.begin(), iter, [](const string& s){ cout << s << " "; });
    cout << endl;
}

int main() {
    vector<string> v{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
    biggies(v, 4);
    return 0;
}
