#include <iostream>
#include <string>
using namespace std;

struct Sales_data {
	string book_no;
	unsigned units_sold = 0;
	double price = 0.;
	double revenue = 0.;
};

int main() {
	Sales_data curr_item, prev_item;
	int count = 0;
	if (cin >> prev_item.book_no) {
		cin >> prev_item.units_sold >> prev_item.price;
		count += 1;
		while (cin >> curr_item.book_no >> curr_item.units_sold >> curr_item.price) 
		   if (curr_item.book_no == prev_item.book_no) 
			count += 1;
		   else {
			cout << prev_item.book_no << " # txns " << count << endl;
			prev_item.book_no = curr_item.book_no;
			prev_item.units_sold = curr_item.units_sold;
			prev_item.price = curr_item.price;
			count = 1;
		   } 
		cout << prev_item.book_no << " # txns " << count << endl;
	} else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}
