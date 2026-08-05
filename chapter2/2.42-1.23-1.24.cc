/*
 * Exercise 2.42:
 * Write your own version of the Sales_data.h header and use it
 * to rewrite the exercise from § 2.6.2 (p. 76)
 *
 * Exercise 1.23:
 * Write a program that reads several transactions and counts
 * how many transactions occur for each ISBN.
 *
 * Exercise 1.24:
 * Test the previous program by giving transactions representing multiple
 * ISBNS. The records for each ISBN should be grouped together
*/

#include "include/2.42.h"
#include <iostream>
using namespace std;

int main() {
	Sales_data curr_item, prev_item;
	int count = 0;
	if (cin >> prev_item.book_no) {
		double price = 0.;
		cin >> prev_item.units_sold >> price;
		count += 1;
		while (cin >> curr_item.book_no >> curr_item.units_sold >> price) 
		   if (curr_item.book_no == prev_item.book_no) 
			count += 1;
		   else {
			cout << "# txns for ISBN " << prev_item.book_no << " = " << count << endl;
			prev_item.book_no = curr_item.book_no;
			prev_item.units_sold = curr_item.units_sold;
			count = 1;
		   } 
		cout << "# txns for ISBN " << curr_item.book_no << " = " << count << endl;
	} else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}
