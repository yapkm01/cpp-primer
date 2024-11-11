#ifndef PERSON_H
#define PERSON_H

#include <string>

struct Person {
    std::string name;
    std::string address;
    auto get_name() const -> std::string;
    auto get_address() const -> std::string;
}; 

std::string Person::get_name() const {
	return this -> name;
}

std::string Person::get_address() const {
	return this -> address;
}

#endif
