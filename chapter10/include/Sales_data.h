#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>

class Sales_data;
std::istream& read(std::istream&, Sales_data&);

class Sales_data {
  friend Sales_data add(const Sales_data&, const Sales_data&);
  friend std::istream& read(std::istream&, Sales_data&);
  friend std::ostream& print(std::ostream&, const Sales_data&);

public:
  Sales_data() : bookNo(""), units_sold(0), revenue(0.0) {}
  Sales_data(const std::string& no) : bookNo(no) {}
  Sales_data(const std::string& no, unsigned us, double price)
      : bookNo(no), units_sold(us), revenue(price * us) {}
  Sales_data(std::istream& is);

  std::string isbn() const { return bookNo; }
  Sales_data& combine(const Sales_data&);
  double avg_price() const;

private:
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

#endif
