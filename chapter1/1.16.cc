/*
 * Exercise 1.16:
 * Write your own version of a program that prints the sum of a
 * set of integers read from cin.
 */

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 0; cin >> i; sum += i);
    cout << "Sum is: " << sum << endl;
    return 0;
}
