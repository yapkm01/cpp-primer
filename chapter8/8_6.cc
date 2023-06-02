#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Sales_data {
  friend Sales_data add(const Sales_data&, const Sales_data&);
  friend istream& read(istream&, Sales_data&);
  friend ostream& print(ostream&, const Sales_data&);

public:
  Sales_data() : Sales_data("", 0, 0.0) {}
  explicit Sales_data(const string& no) : Sales_data(no, 0, 0.0) {}
  Sales_data(const string& no, unsigned us, double price)
      : bookNo(no), units_sold(us), revenue(price * us) {}
  explicit Sales_data(istream& is) : Sales_data() { read(is, *this); }

  string isbn() const { return bookNo; }
  Sales_data& combine(const Sales_data&);

private:
  double avg_price() const;
  string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
  Sales_data sum = lhs;  // Use default copy constructor
  sum.combine(rhs);
  return sum;
}

istream& read(istream& is, Sales_data& item) {
  double price;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = item.units_sold * price;
  return is;
}

ostream& print(ostream& os, const Sales_data& item) {
  os << item.isbn() << " " << item.units_sold << " "
     << item.revenue << " " << item.avg_price();
  return os;
}

inline
double Sales_data::avg_price() const {
  return units_sold ? revenue / units_sold : 0;
}

int main(int argc, char** argv) {
  if (argc < 2) {
    cerr << "Usage: 8_6.o <filename>" << endl;
    return -3;
  }
  ifstream in(argv[1]);
  if (!in) {
    cerr << "Fail to open file: " << argv[1] << endl;
    return -2;
  }

  Sales_data total;
  if (read(in, total)) {
    Sales_data trans;
    while (read(in, trans)) {
      if (total.isbn() == trans.isbn()) {
        total.combine(trans);
      } else {
        print(cout, total) << endl;
        total = trans;  // Use default copy constructor
      }
    }
    print(cout, total) << endl;
  } else {
    cerr << "No data!" << endl;
    return -1;
  }

  in.close();
  return 0;
}
