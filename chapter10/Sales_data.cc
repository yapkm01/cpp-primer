#include "include/Sales_data.h"
using namespace std;

Sales_data::Sales_data(istream& is) {
	read(is, *this);
}

Sales_data& Sales_data::combine(const Sales_data& rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

Sales_data& Sales_data::operator+=(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
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

Sales_data operator+(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data ret(lhs);
    ret += rhs;
    return ret;
}

double Sales_data::avg_price() const {
  return units_sold ? revenue / units_sold : 0;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}

istream& read(istream& is, Sales_data& item) {
  double price;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = item.units_sold * price;
  return is;
}

std::istream& operator>>(std::istream& in, Sales_data& item) {
    double price;
    in >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return in;
}

ostream& print(ostream& os, const Sales_data& item) {
  os << item.isbn() << " " << item.units_sold << " "
     << item.revenue << " " << item.avg_price();
  return os;
}

ostream& operator<<(ostream& out, const Sales_data& item) {
    out << item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << item.avg_price();
    return out;
}

