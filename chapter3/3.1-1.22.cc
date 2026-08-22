/*
 * Exercise 3.1:
 * Rewrite the exercises from § 1.4.1 (p. 13) and § 2.6.2 (p. 76)
 * with appropriate using declarations.
 *
 * Exercise 1.22:
 * Write a program that reads several transactions for the same
 * ISBN. Write the sum of all the transactions that were read.
 */

#include <iostream>
#include <string>
using namespace std;

struct Sales_data {
    string book_no;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

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
