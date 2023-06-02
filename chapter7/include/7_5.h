#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

struct Person {
    string name;
    string address;
    auto get_name() const -> string;
    auto get_address() const -> string;
}; 

string Person::get_name() const {
	return this -> name;
}

string Person::get_address() const {
	return this -> address;
}

#endif
