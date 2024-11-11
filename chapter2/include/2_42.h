#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <string>

struct Sales_data {
        std::string book_no;
        unsigned units_sold = 0;
        double price = 0.;
        double revenue = 0.;

	Sales_data& operator+=(const Sales_data&);
	Sales_data& operator+(const Sales_data&);
	std::string isbn () const;
	double avg_price() const;
};

std::string Sales_data::isbn() const {
	return book_no;
}

Sales_data& Sales_data::operator+=(const Sales_data& rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	price = avg_price();
	return *this;
}

Sales_data& Sales_data::operator+(const Sales_data& rhs) {
	*this += rhs;
	return *this;
}

std::istream& operator>>(std::istream& in, Sales_data& s) {
	if (in) {
		in >> s.book_no >> s.units_sold >> s.price;
		s.revenue = s.units_sold * s.price;
	} else s= Sales_data();
	return in;
}

std::ostream& operator<<(std::ostream& out, Sales_data& s) {
	if (out) {
		out << s.book_no << " " << s.units_sold << " " << s.price
		    << " " << s.revenue;
	} else s = Sales_data();
	return out;
}

double Sales_data::avg_price() const {
	if (units_sold)
	     return revenue/units_sold;
	else return 0;
}

#endif
