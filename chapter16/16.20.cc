/*
 * Exercise 16.20:
 * Rewrite the function from the previous exercise to use iterators returned
 * from begin and end to control the loop.
 */

#include <iostream>
#include <vector>
#include <list>
using namespace std;

template<typename T>
ostream& print(const T& t, ostream& os) {
    for(auto i = t.cbegin(); i != t.cend(); ++i)
        os << *i << " ";
    return os;
}

int main() {
    vector<int> v = { 1, 23, 6, 4, 5, 7, 4 };
    list<string> l = { "ss", "sszz", "saaas", "s333s", "ss2", "sss" };
    print(v, cout) << endl;
    print(l, cout) << endl;

    return 0;
}
