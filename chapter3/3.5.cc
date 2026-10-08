/*
 * Exercise 3.5: 
 * Write a program to read strings from the standard input, concatenating
 * what is read into one large string. Print the concatenated string. Next
 * change the program to separate adjacent input strings by a space.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
/*
    string concatenated;
    for (string buffer; cin >> buffer; concatenated += buffer);
    cout << "The concatenated string is " << concatenated << endl;
*/
    string str;
    for (string buff; cin >> buff; str += (str.empty() ? "" : " ") + buff);
    cout << "The concatenated string is " << str << endl;

    return 0;
}
