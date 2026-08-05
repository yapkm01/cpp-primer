/*
 * Exercise 2.42:
 * Write your own version of the Sales_data.h header and use it
 * to rewrite the exercise from § 2.6.2 (p. 76)
 *
 * Exercise 1.22:
 * Write a program that reads several transactions for the same
 * ISBN. Write the sum of all the transactions that were read.
 */

#include "include/2.42.h"
#include <iostream>
using namespace std;

int main() {
    Sales_data total;
    double totalPrice;
    if (cin >> total.book_no >> total.units_sold >> totalPrice) {
        total.revenue = total.units_sold * totalPrice;
        Sales_data trans;
        double transPrice;

        while (cin >> trans.book_no >> trans.units_sold >> transPrice) {
            trans.revenue = trans.units_sold * transPrice;
            if (total.book_no == trans.book_no) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else {
                cout << total.book_no << " " << total.units_sold << " " << total.revenue << " ";
                if (total.units_sold != 0)
                    cout << total.revenue / total.units_sold << endl;
                else
                    cout << "(no sales)" << endl;
                total.book_no = trans.book_no;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }

        cout << total.book_no << " " << total.units_sold << " " << total.revenue << " ";
        if (total.units_sold != 0)
            cout << total.revenue / total.units_sold << endl;
        else
            cout << "(no sales)" << endl;

        return 0;
    }
    else {
        cerr << "No data?!" << endl;
        return -1;  // indicate failure
    }
}
