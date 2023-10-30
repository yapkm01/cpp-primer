#include "include/Sales_data.h"
using namespace std;

Sales_data::Sales_data(istream& is) {
	read(is, *this);
}

Sales_data& Sales_data::operator+(const Sales_data& item) {
    units_sold += item.units_sold;
    revenue += item.revenue;
    return *this;
}

Sales_data& Sales_data::combine(const Sales_data& item) {
  units_sold += item.units_sold;
  revenue += item.revenue;
  return *this;
}

double Sales_data::avg_price() const {
  return units_sold ? revenue / units_sold : 0;
}

std::istream& operator>>(std::istream& in, Sales_data& item) {
    double price;
    in >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return in;
}

ostream& operator<<(ostream& out, const Sales_data& item) {
    out << item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << item.avg_price();
    return out;
}

inline
bool operator==(const Sales_data& lhs, const Sales_data& rhs) {
    return lhs.units_sold == rhs.units_sold &&
           lhs.revenue == rhs.revenue &&
           lhs.isbn() == rhs.isbn();
}

inline
bool operator!=(const Sales_data& lhs, const Sales_data& rhs) {
    return !(lhs == rhs);
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

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}
