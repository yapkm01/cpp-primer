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
    Sales_data total;

    if (cin >> total.book_no) {
	cin >> total.units_sold >> total.price;
	total.revenue = total.units_sold * total.price;

        Sales_data trans; 
        while (cin >> trans.book_no >> trans.units_sold >> trans.price) 
            if (total.book_no == trans.book_no) {
                total.units_sold += trans.units_sold;
		total.revenue += trans.units_sold * trans.price;
	    }
            else {
                cout << total.book_no <<  " " << total.units_sold << " " <<  total.revenue 
		     << " " << (total.units_sold > 0 ? total.revenue/total.units_sold : 0) << endl;
                total.book_no = trans.book_no;
                total.units_sold = trans.units_sold;
                total.price = trans.price;
                total.revenue = trans.units_sold * trans.price;
            }
        cout << total.book_no << " " << total.units_sold << " " <<  total.revenue 
	     << " " << (total.units_sold > 0 ? total.revenue/total.units_sold : 0) << endl;
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}
