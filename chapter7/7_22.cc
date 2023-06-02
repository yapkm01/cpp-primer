#include <string>
#include <iostream>
using namespace std;

class Person {
  friend istream &read(istream &, Person &);
public:
  Person() = default;
  Person(const string &n) : name(n) {}
  Person(const string &n, const string &a)
      : name(n), address(a) {}
  Person(istream &);

  string getName() const { return name; }
  string getAddress() const { return address; }

private:
  string name;
  string address;
};

istream &read(istream &is, Person &rhs) {
  is >> rhs.name >> rhs.address;
  return is;
}

ostream &print(ostream &os, const Person &rhs) {
  os << rhs.getName() << " " << rhs.getAddress() << endl;
  return os;
}

Person::Person(istream &is) {
  read(is, *this);
}

int main() {
  Person p;
  read(cin, p);
  print(cout, p);

  return 0;
}

