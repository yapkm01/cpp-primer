/*
 * Exercise 16.14:
 * Write a Screen class template that uses nontype parameters to define the
 * height and width of the Screen.
 */

#include "16.14.h"
using namespace std;

int main() {
    Screen<5, 5> scr1('c');
    return 0;
}
