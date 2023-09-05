#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main() {
    vector<int> vec{ 1, 1, 3, 3, 5, 5, 7, 7, 9 };
    list<int> lst;

    unique_copy(vec.begin(), vec.end(), back_inserter(lst));
    for (auto i : lst)
        cout << i << " ";
    cout << endl;
    return 0;
}
