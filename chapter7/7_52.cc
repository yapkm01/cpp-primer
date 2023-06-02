#include <string>
#include <iostream>
using namespace std;

struct Sales_data {
  string bookNo;
  unsigned units_sold; //= 0;
  double revenue; //= 0.0;
  // Error: Cannot provide in-class initializer for an aggregate class
};

int main() {
  Sales_data item = {"978-0590353403", 25, 15.99};
  cout << item.bookNo << " " << item.revenue << " " << item.units_sold << endl;

  return 0;
}
