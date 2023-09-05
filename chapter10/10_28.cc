#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

template<typename Sequence>
void print(Sequence const& seq) {
    for (const auto& i : seq)
        cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    
    // uses inserter
    list<int> lst1;
    copy(vec.cbegin(), vec.cend(), inserter(lst1, lst1.begin()));
    print(lst1);
    
    // uses back_inserter
    list<int> lit2;
    copy(vec.cbegin(), vec.cend(), back_inserter(lit2));
    print(lit2);
    
    // uses front_inserter
    list<int> lst3;
    copy(vec.cbegin(), vec.cend(), front_inserter(lst3));
    print(lst3);

    return 0;
}
