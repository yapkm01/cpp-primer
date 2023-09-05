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
	Sales_data item;
	while (cin >> item.book_no >> item.units_sold >> item.price)
		cout << item.book_no << " " <<  item.units_sold << " " << item.price << " " 
		     << (item.units_sold * item.price) <<  endl;
	return 0;
}
