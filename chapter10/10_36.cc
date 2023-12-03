#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {

    list<int> lst = { 1, 2, 3, 4, 0, 5, 6 };

    auto found_0 = find(lst.crbegin(), lst.crend(), 0);
    cout << distance(found_0, lst.crend()) << endl;

    return 0;

}
