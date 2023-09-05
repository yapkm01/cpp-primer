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
	Sales_data item1, item2;
	cout << "Please enter 2 transactions with same ISBN in format: ISBN, units sold & price" << endl;
	cin >> item1.book_no >> item1.units_sold >> item1.price;
	cin >> item2.book_no >> item2.units_sold >> item2.price;
	item1.revenue = item1.units_sold * item1.price;
	item2.revenue = item2.units_sold * item2.price;
	
	cout << item1.book_no << " " <<  item1.units_sold + item2.units_sold << " " << item1.revenue + item2.revenue << " " 
             << (item1.revenue + item2.revenue) / (item1.units_sold + item2.units_sold) << endl;
	return 0;
}
