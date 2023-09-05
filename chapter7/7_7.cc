#include <iostream>
#include <string>
#include "include/7_7.h"
using namespace std;

int main() {

    Sales_data total;
    if (read(cin, total)) {
        Sales_data transaction;
        while (read(cin, transaction)) {
            if (total.isbn()  == transaction.isbn()) {
                total.combine(transaction);
            }
            else {
                print(cout, total);
                cout << endl;
                total = transaction;
            }
        }
        print(cout, total);
        cout << endl;
    }
    else {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;

}
