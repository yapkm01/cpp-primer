#include <iostream>
#include <string>
#include "include/7_1.h"
using namespace std;

int main() {

    Sales_data total;
    if (cin >> total.bookNo
            >> total.units_sold
            >> total.revenue) {

        Sales_data transaction;
        while (cin >> transaction.bookNo
                   >> transaction.units_sold
                   >> transaction.revenue) {

            if (total.bookNo == transaction.bookNo) {
                total.units_sold += transaction.units_sold;
                total.revenue += transaction.revenue;
            }
            else {
                cout << "ISBN: " << total.bookNo << endl
                     << "Units sold: " << total.units_sold << endl
                     << "Total revenue: " << total.revenue << endl
                     << endl;
                total = transaction;
            }
        }
        cout << "ISBN: " << total.bookNo << endl
             << "Units sold: " << total.units_sold << endl
             << "Total revenue: " << total.revenue << endl;
    }
    else {
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}
