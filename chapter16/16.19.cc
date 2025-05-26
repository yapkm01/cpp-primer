/*
 * Exercise 16.19:
 * Write a function that takes a reference to a container and prints the
 * elements in that container. Use the container’s size_type and size members
 * to control the loop that prints the elements.
 */

#include <iostream>
#include <vector>
using namespace std;

template<typename T>
ostream& print(const T& t, ostream& os) {
    for(typename T::size_type i = 0; i != t.size(); ++ i)
        os << t[i] << " ";
    return os;
}

int main() {
    vector<int> v = { 1, 23, 6, 4, 5, 7, 4 };
    print(v, cout) << endl;

    return 0;
}
