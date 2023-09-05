#include <iostream>
#include "./include/7_13.h"
using namespace std;

int main() {

    while (cin) {
        static Sales_data total(cin);
        if (total.isbn().empty()) {
            return -1;
        }
        Sales_data trans(cin);
        if (total.isbn() == trans.isbn()) {
            total.combine(trans);
        } else {
            print(cout, total) << endl;
            total = trans;
        }
    }

    return 0;

}
