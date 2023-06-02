#ifndef PERSON_V_H
#define PERSON_V_H

#include <istream>
#include <string>
using namespace std;

// Forward declaration
class Person;
istream &read(istream &input, Person &person);
ostream &print(ostream &output, const Person &person);

class Person {

friend istream &read(istream &input, Person &person);
friend ostream &print(ostream &output, const Person &person);

private:
    string name;
    string address;

public:
    Person() = default;

    Person(const string name, const string address)
        : name(name)
        , address(address)
    {}

    Person(istream &input) {
        read(input, *this);
    }

    string get_name() const;
    string get_address() const;

};

string Person::get_name() const {
    return this->name;
}

string Person::get_address() const {
    return this->address;
}

istream &read(istream &input, Person &person) {
    // Grab data one line at a time (to allow for spaces)
    getline(input, person.name);
    getline(input, person.address);
    return input;
}

ostream &print(ostream &output, const Person &person) {
    output << person.name << " " << person.address;
    return output;
}

#endif
