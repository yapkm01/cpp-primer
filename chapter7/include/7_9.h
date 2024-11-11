#ifndef PERSON_H
#define PERSON_H

#include <istream>
#include <ostream>
#include <string>

struct Person {
    std::string name;
    std::string address;
    auto get_name() const -> std::string;
    auto get_address() const -> std::string;
    auto read(std::istream& input, Person& person) -> std::istream&;
    auto print(std::ostream& output, const Person& person) -> std::ostream&;
}; 

std::string Person::get_name() const {
	return this -> name;
}

std::string Person::get_address() const {
	return this -> address;
}

std::istream& read(std::istream& input, Person& person) {
    input >> person.name >> person.address;
    return input;
}

std::ostream& print(std::ostream& output, const Person& person) {
    output << person.name << " " << person.address;
    return output;
}

#endif
