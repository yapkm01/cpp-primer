#include <string>
#include <iostream>
using namespace std;

class Sales_data;
istream &read(istream &, Sales_data &);

class Sales_data {
  friend Sales_data add(const Sales_data &, const Sales_data &);
  friend istream &read(istream &, Sales_data &);
  friend ostream &print(ostream &, const Sales_data &);

public:
  Sales_data() : bookNo(""), units_sold(0), revenue(0.0) {}
  Sales_data(const string &no) : bookNo(no) {}
  Sales_data(const string &no, unsigned us, double price)
      : bookNo(no), units_sold(us), revenue(price * us) {}
  Sales_data(istream &is) {
    read(is, *this);
  }

  string isbn() const { return bookNo; }
  Sales_data &combine(const Sales_data &);

private:
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;  // Use default copy constructor
  sum.combine(rhs);
  return sum;
}

istream &read(istream &is, Sales_data &item) {
  double price;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = item.units_sold * price;
  return is;
}

ostream &print(ostream &os, const Sales_data &item) {
  os << item.isbn() << " " << item.units_sold << " " << item.revenue;
  return os;
}

int main() {
  Sales_data d1;
  Sales_data d2("0-201-78345-X");
  Sales_data d3("0-201-78345-X", 5, 2.5);
  Sales_data d4(cin);

  print(cout, d1) << endl;
  print(cout, d2) << endl;
  print(cout, d3) << endl;
  print(cout, d4) << endl;

  Sales_data total(cin);
  if (cin) {
    Sales_data trans(cin);
    while (cin) {
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      } else {
        print(cout, total) << endl;
        total = trans;  // Use default copy constructor
      }
      read(cin, trans);
    }
    print(cout, total) << endl;
  } else {
    cerr << "No data!" << endl;
    return -1;
  }

  return 0;
}
