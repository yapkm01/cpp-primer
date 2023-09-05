#include <string>
#include <iostream>
using namespace std;

class Person {
  friend istream& read(istream&, Person&);

public:
  Person() = default;
  explicit Person(const string& n) : name(n) {} // ensuring explicit for single argument constructor
  Person(const string& n, const string& a)
      : name(n), address(a) {}
  explicit Person(istream&); // ensuring explicit for single argument constructor

  string getName() const { return name; }
  string getAddress() const { return address; }

private:
  string name;
  string address;
};

istream& read(istream& is, Person& rhs) {
  is >> rhs.name >> rhs.address;
  return is;
}

ostream& print(ostream& os, const Person& rhs) {
  os << rhs.getName() << " " << rhs.getAddress() << endl;
  return os;
}

Person::Person(istream& is) {
  read(is, *this);
}

int main() {
  Person p;
  read(cin, p);
  print(cout, p);

  return 0;
}
