/*
 * Exercise 16.15: 
 * Implement input and output operators for your Screen
 * template. Which, if any, friends are necessary in class Screen to make the
 * input and output operators work? Explain why each friend declaration, if
 * any, was needed.
 */

#include "16.15.h"
#include <iostream>
using namespace std;

int main() {
    Screen<5, 5> scr1('c');
    Screen<5, 5> scr2;
    // output src1 to the screen
    cout << scr1;
    // input connect to the src2
    cin >> scr2;
    // test input
    cout << scr2;

    return 0;
}
