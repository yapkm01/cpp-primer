/*
 * Exercise 1.18:
 * Compile and run the program from this section giving it only
 * equal values as input. Run it again giving it values in which no number is
 * repeated.
 */

#include <iostream>
using namespace std;

int main() {
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (cin >> currVal) {
        int cnt = 1;  // store the count for the current value we're processing
        while (cin >> val)  // read the remaining numbers
            if (val == currVal)   // if the values are the same
                ++cnt;            // add 1 to cnt
            else { // otherwise, print the count for the previous value
                cout << currVal << " occurs "
                          << cnt << " times" << endl;
                currVal = val;    // remember the new value
                cnt = 1;          // reset the counter
            }
        // remember to print the count for the last value in the file
        cout << currVal <<  " occurs "
             << cnt << " times" << endl;
    } // outermost if statement ends here
    return 0;
}

