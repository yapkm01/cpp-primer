/*
 * Exercise 2.41:
 * Use your Sales_data class to rewrite the exercises in § 1.5.1
 * (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define your
 * Sales_data class in the same file as your main function.
 *
 * Exercise 1.25:
 * Using the Sales_item.h header from Web site, compile and execute and
 * bookstore program presented in this section.
 */

#include <iostream>
#include <string>
using namespace std;

struct Sales_data {
    string book_no;
    unsigned units_sold = 0;
    double revenue = 0.;
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
            } else {
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
    } else {
        cerr << "No data?!" << endl;
        return -1;  // indicate failure
    }
}
