
#ifndef SALES_DATA_H_
#define SALES_DATA_H_

#include <iostream>

class Sales_data {
  friend std::istream& read(std::istream&, Sales_data&);
  friend std::ostream& print(std::ostream&, const Sales_data&);
  friend std::istream& operator>>(std::istream&, Sales_data&);
  friend std::ostream& operator<<(std::ostream&, const Sales_data&);
  friend bool operator==(const Sales_data&, const Sales_data&);
  friend Sales_data operator+(const Sales_data&, const Sales_data&);

  public:
  	Sales_data() = default;
  	Sales_data(const std::string& no) : bookNo(no) {}
  	Sales_data(const std::string& no, unsigned us, double price)
      		: bookNo(no), units_sold(us), revenue(price * us) {}
  	Sales_data(std::istream& is);

  	Sales_data& operator+(const Sales_data&);
  	Sales_data& combine(const Sales_data&);
  	std::string isbn() const {return bookNo;}
  	double avg_price() const;

  private:
 	std::string bookNo;
  	unsigned units_sold = 0;
  	double revenue = 0.0;
};

inline bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs) {
  return lhs.isbn() < rhs.isbn(); 
}

#endif

std::istream& read(std::istream&, Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& operator>>(std::istream&, Sales_data&);
std::ostream& operator<<(std::ostream&, const Sales_data&);
bool operator==(const Sales_data&, const Sales_data&);

