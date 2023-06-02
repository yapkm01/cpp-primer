#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <istream>
#include <string>
using namespace std;

struct Sales_data;
Sales_data add(const Sales_data &first_transaction,
               const Sales_data &second_transaction);
istream &read(istream &input, Sales_data &transaction);
ostream &print(ostream &output, const Sales_data &transaction);

struct Sales_data {

    string bookNo;
    unsigned units_sold;
    double revenue;

    Sales_data() : bookNo(""), units_sold(0), revenue(0.0) {}

    Sales_data(const string &book_isbn) : bookNo(book_isbn) {}

    Sales_data(const string &book_isbn, unsigned units, double price)
        : bookNo(book_isbn)
        , units_sold(units)
        , revenue(units * price)
    {}

    Sales_data(istream &input) {
        read(input, *this);
    }

    string isbn() const;
    Sales_data &combine(const Sales_data &transaction);

};

string Sales_data::isbn() const {
    return this->bookNo;
}

Sales_data &Sales_data::combine(const Sales_data &transaction) {
    if (this->isbn() == transaction.isbn()) {
        this->units_sold += transaction.units_sold;
        this->revenue += transaction.revenue;
    }
    return *this;
}

Sales_data add(const Sales_data &first_transaction, const Sales_data &second_transaction) {
    Sales_data sum = first_transaction;
    sum.combine(second_transaction);
    return sum;
}

istream &read(istream &input, Sales_data &transaction) {
    double price = 0.0;
    input >> transaction.bookNo >> transaction.units_sold >> price;
    transaction.revenue = transaction.units_sold * price;
    return input;
}

ostream &print(ostream &output, const Sales_data &transaction) {
    output << transaction.isbn() << " "
           << transaction.units_sold << " "
           << transaction.revenue;
    return output;
}

#endif
