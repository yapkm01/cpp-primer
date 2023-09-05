#include "include/2_42.h"

int main() {
	Sales_data curr_item, prev_item;
	int count = 0;
	if (cin >> prev_item) {
		count += 1;
		while (cin >> curr_item) 
		   if (curr_item.isbn() == prev_item.isbn()) 
			count += 1;
		   else {
			cout << count << endl;
			prev_item = curr_item;
			count = 1;
		   } 
		cout << count << endl;
	} else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}
