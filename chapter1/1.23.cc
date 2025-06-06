/*
 * Exercise 1.23:
 * Write a program that reads several transactions and counts
 * how many transactions occur for each ISBN.
 */

#include <iostream>
#include "include/Sales_item.h"
using namespace std;

int main() {
    Sales_item item; // variable to hold data for the next transaction
    int count=1;
    // read the first transaction and ensure that there are data to process
    if (cin >> item) {
        Sales_item currentItem; // variable to hold the current item
        // read and process the remaining transactions
        while (cin >> currentItem) 
            // if we're still processing the same book
            if (item.isbn() == currentItem.isbn())
                count += 1; // update the running count
            else {
                // print results for the previous book
                cout << item.isbn() << " count = " << count << endl;
                item = currentItem;  // item now refers to the next book
		count = 1;
            }
        cout << item.isbn() << " count = " << count << endl;
    } else {
        // no input! warn the user
        cerr << "No data?!" << endl;
        return -1;  // indicate failure
    }
    return 0;
}

