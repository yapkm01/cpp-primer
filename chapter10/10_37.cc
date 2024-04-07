#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {

    vector<int> vec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    list<int> lst (8-3);

    copy(vec.cbegin() + 3, vec.cbegin() + 8, lst.rbegin());
    for (auto x: lst) {
	    cout << x << " ";
    }

    cout << endl;

    return 0;

}
