#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

template<typename T>
inline ostream& println(const T& seq) {
    for(const auto& elem : seq) cout << elem << " ";
    cout << endl;
    return cout;
}

inline bool
is_shorter(const string& lhs, const string& rhs){
    return lhs.size() < rhs.size();
}

void elimdups(vector<string>& vs) {
    sort(vs.begin(), vs.end());
    auto new_end = unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}


int main() {
    vector<string> v{
	"bbbb", "bbbcc", "aacc", "aaaaa", "aab", "1111"
    };
    elimdups(v);
    println(v);
    stable_sort(v.begin(), v.end(), is_shorter);
    println(v);

    return 0;
}
