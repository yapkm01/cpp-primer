/*
 * Exercise 16.4:
 * Write a template that acts like the library find algorithm.
 * The function will need two template type parameters, one to represent the
 * function's iterator parameters and the other for the type of the value. Use
 * your function to find a given value in a vector<int> and in a list<string>.
 */

#include <iostream>
#include <vector>
#include <list>
using namespace std;

template<typename Iterator, typename V>
auto find(Iterator first, Iterator last, const V& value) {
    for (; first != last && *first != value; ++first);
    return first;
}

int main() {
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto is_in_vector = v.cend() != find(v.cbegin(), v.cend(), 5);
    cout << (is_in_vector ? "found\n" : "not found\n");

    list<std::string> l = { "aa", "bb", "cc", "dd", "ee", "ff", "gg" };
    auto is_in_list = l.cend() != find(l.cbegin(), l.cend(), "zz");
    cout << (is_in_list ? "found\n" : "not found\n");

    return 0;
}
