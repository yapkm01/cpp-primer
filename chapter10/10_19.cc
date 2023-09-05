#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void elimdups(vector<string>& vs) {
    sort(vs.begin(), vs.end());
    auto new_end = unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}

void biggies_partition(vector<string>& vs, size_t sz) {
    elimdups(vs);
    
    cout << "after elimdups before partition: " << endl;
    for(auto it = vs.cbegin(); it != vs.end(); ++it)
        cout << *it << " ";
    cout << endl;

    auto pivot = stable_partition(vs.begin(), vs.end(), [sz](const string& s){
        return s.size() >= sz;}
    );

    cout << "after partition: " << endl;
    for(auto it = vs.cbegin(); it != pivot; ++it)
        cout << *it << " ";
}

int main() {
    vector<string> v{
        "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
    };
    
    biggies_partition(v, 4);
    cout << endl;

    return 0;
}
