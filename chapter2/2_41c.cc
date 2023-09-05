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
	Sales_data item, items;
	while (cin >> item.book_no >> item.units_sold >> item.price) {
		items.book_no = item.book_no;
		items.units_sold += item.units_sold;
		items.revenue += item.units_sold * item.price;		
	}
	cout << items.book_no << " " <<  items.units_sold << " " << items.revenue << endl;
	return 0;
}
