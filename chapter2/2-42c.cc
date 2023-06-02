#include "2_42.h"

int main() {
	Sales_data item, items;
	while (cin >> item) {
		items += item;
	}
	cout << items << endl;
	return 0;
}
