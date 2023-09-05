#include <iostream>
#include "include/Sales_item.h"
using namespace std;

int main() {
    Sales_item item, tItems;
    while (cin >> item)
	tItems += item;
    cout << tItems << endl;
    return 0;
}
