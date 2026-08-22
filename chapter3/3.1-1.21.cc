/*
 * Exercise 3.1:
 * Rewrite the exercises from § 1.4.1 (p. 13) and § 2.6.2 (p. 76)
 * with appropriate using declarations.
 *
 * Exercise 1.21:
 * Write a program that reads two Sales_item objects that have the
 * same ISBN and produces their sum.
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
	Sales_data item1, item2;
	double price1, price2;
	cout << "Please enter 2 transactions with same ISBN in format: ISBN, units sold & price" << endl;
	cin >> item1.book_no >> item1.units_sold >> price1;
	cin >> item2.book_no >> item2.units_sold >> price2;
	item1.revenue = item1.units_sold * price1;
	item2.revenue = item2.units_sold * price2;

	if (item1.book_no != item2.book_no) {
		cerr << "ISBN mismatch" << endl;
		return -1;
	}

	unsigned totalCount = item1.units_sold + item2.units_sold;
	double totalRevenue = item1.revenue + item2.revenue;
	cout << item1.book_no << " " << totalCount << " "
	     << totalRevenue;

	if (totalCount != 0)
		cout << " " << totalRevenue/totalCount << endl;
	else
		cout << " (no sales)" << endl;
	return 0;
}
