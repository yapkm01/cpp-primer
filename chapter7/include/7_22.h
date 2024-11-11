#ifndef PERSON_V_H
#define PERSON_V_H

#include <istream>
#include <ostream>
#include <string>

// Forward declaration
class Person;
std::istream& read(std::istream& input, Person& person);
std::ostream& print(std::ostream& output, const Person& person);

class Person {

friend std::istream& read(std::istream& input, Person& person);
friend std::ostream& print(std::ostream& output, const Person& person);

private:
    std::string name;
    std::string address;

public:
    Person() = default;

    Person(const std::string name, const std::string address)
        : name(name)
        , address(address)
    {}

    Person(std::istream& input) {
        read(input, *this);
    }

    std::string get_name() const;
    std::string get_address() const;

};

std::string Person::get_name() const {
    return this->name;
}

std::string Person::get_address() const {
    return this->address;
}

std::istream& read(std::istream& input, Person& person) {
    // Grab data one line at a time (to allow for spaces)
    getline(input, person.name);
    getline(input, person.address);
    return input;
}

std::ostream& print(std::ostream& output, const Person& person) {
    output << person.name << " " << person.address;
    return output;
}

#endif
