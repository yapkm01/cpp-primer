/*
 * Exercise 2.41:
 * Use your Sales_data class to rewrite the exercises in § 1.5.1
 * (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define your
 * Sales_data class in the same file as your main function.
 *
 * Exercise 1.22:
 * Write a program that reads several transactions for the same
 * ISBN. Write the sum of all the transactions that were read.
 */

#include <iostream>
#include <string>
using namespace std;

struct Sale_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main() {
    Sale_data total;
    double totalPrice;
    if (cin >> total.bookNo >> total.units_sold >> totalPrice) {
        total.revenue = total.units_sold * totalPrice;
        Sale_data trans;
        double transPrice;

        while (cin >> trans.bookNo >> trans.units_sold >> transPrice) {
            trans.revenue = trans.units_sold * transPrice;
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            }
            else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
                if (total.units_sold != 0)
                    cout << total.revenue / total.units_sold << endl;
                else
                    cout << "(no sales)" << endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }

        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
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
