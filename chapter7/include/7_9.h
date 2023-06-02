#ifndef PERSON_H
#define PERSON_H

#include <istream>
#include <string>
using namespace std;

struct Person {
    string name;
    string address;
    auto get_name() const -> string;
    auto get_address() const -> string;
    auto read(istream &input, Person &person) -> istream &;
    auto print(ostream &output, const Person &person) -> ostream &;
}; 

string Person::get_name() const {
	return this -> name;
}

string Person::get_address() const {
	return this -> address;
}

istream &read(istream &input, Person &person) {
    input >> person.name >> person.address;
    return input;
}

ostream &print(ostream &output, const Person &person) {
    output << person.name << " " << person.address;
    return output;
}

#endif
