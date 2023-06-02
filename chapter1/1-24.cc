#include <iostream>
#include "Sales_item.h"
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
                cout << count << endl;
                item = currentItem;  // item now refers to the next book
		count = 1;
            }
        cout << count << endl; // print the last transaction
    } else {
        // no input! warn the user
        cerr << "No data?!" << endl;
        return -1;  // indicate failure
    }
    return 0;
}
