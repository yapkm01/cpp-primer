#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
auto println(const T& seq) -> ostream& {
    for (const auto& elem : seq) 
        cout << elem << " ";
    return cout << endl;
}

auto eliminate_duplicates(vector<string>& vs) -> vector<string>& {
    sort(vs.begin(), vs.end());
    println(vs);

    auto new_end = unique(vs.begin(), vs.end());
    println(vs);

    vs.erase(new_end, vs.end());
    return vs;
}

int main() {
    vector<string> vs{ "a", "v", "a", "s", "v", "a", "a", "1" };
    println(vs);
    println(eliminate_duplicates(vs));

    return 0;
}
