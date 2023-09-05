#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
ostream& println(const T& seq) {
    for(const auto& elem : seq) cout << elem << " ";
    cout << endl;
    return cout;
}

void elimdups(vector<string>& vs) {
    sort(vs.begin(), vs.end());
    auto new_end = unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

void biggies(vector<string>& vs, size_t sz) {
    elimdups(vs);
    println(vs);

    // sort by size, but maintain alphabetical order for same size
    stable_sort(vs.begin(), vs.end(), [](string const& lhs, string const& rhs){
        return lhs.size() < rhs.size();
    });
    println(vs);

    // get an iterator to the first one whose size() is >= sz
    auto wc = find_if(vs.begin(), vs.end(), [sz](string const& s){
            return s.size() >= sz;
    });
        
    // print the biggies
    for_each(wc, vs.end(), [](const string& s){
        cout << s << " ";
    }); 
}

int main() {
    vector<string> v {
        "1234","1234","1234","hi~", "alan", "alan", "cp"
    };
    biggies(v, 3);
    cout << endl;

    return 0;
}
