/*
 * Exercise 3.4: 
 * Write a program to read two strings and report whether the
 * strings are equal. If not, report which of the two is larger. Now, change
 * the program to report whether the strings have the same length, and if not,
 * report which is longer.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    if (str1 == str2)
       cout << "The two strings are equal" << endl;
    else
       cout << "The larger string is " << ((str1 > str2) ? str1 : str2) << endl;
/*
    if (str1.size() == str2.size())
       cout << "The two strings are equal size" << endl;
    else
       cout << "The larger string size is " << ((str1.size() > str2.size()) ? str1 : str2) << endl;
*/
    return 0;
}
