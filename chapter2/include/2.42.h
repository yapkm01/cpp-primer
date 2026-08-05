#ifndef SALESDATA_H
#define SALESDATA_H

#include <string>

struct Sales_data {
	std::string book_no;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

#endif
