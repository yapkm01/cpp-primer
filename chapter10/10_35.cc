#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {

    vector<int> vec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (auto it = prev(vec.cend()); true; --it) {
        cout << *it << " ";
    	if (it == vec.cbegin()) break;
    }
    cout << endl;

    return 0;

}
