#include <iostream>
#include "include/7_11.h"
using namespace std;

int main() {

    Sales_data first_transaction;
    Sales_data second_transaction("0-006-47988-X");
    Sales_data third_transaction("0-006-47988-X", 5, 29.95);

    cout << "Enter sale data (isbn, units sold, price each): " << endl;
    Sales_data fourth_transaction(cin);

    print(cout, first_transaction);
    cout << endl;
    print(cout, second_transaction);
    cout << endl;
    print(cout, third_transaction);
    cout << endl;
    print(cout, fourth_transaction);
    cout << endl;

    return 0;

}
