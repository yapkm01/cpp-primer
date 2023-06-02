#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const string &s) {
    return s.size() >= 5; 
}

int main() {
    auto v = vector<string>{ "a", "as", "aasss", "aaaaassaa", "aaaaaabba", "aaa" };
    auto pivot = partition(v.begin(), v.end(), compare);
    
    for (auto it = v.cbegin(); it != pivot; ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
