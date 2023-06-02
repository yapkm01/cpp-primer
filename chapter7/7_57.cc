#include <string>
#include <iostream>
using namespace std;

class Account {
  static constexpr int period = 30;
  friend ostream &print(ostream &, const Account &);

public:
  Account() : Account("", 0) {}
  explicit Account(const string &o, double b = 0.0)
      : owner(o), balance(b), daily_tbl() {}

  void addInterest() { balance += balance * interestRate; }
  ostream &print(ostream &);

  static double rate() { return interestRate; }
  static void rate(double newRate) { interestRate = newRate; }

private:
  static double interestRate;
  static double initRate();
  string owner;
  double balance;
  double daily_tbl[period];
};

double Account::interestRate = initRate();

double Account::initRate() {
  return 0.1;
}

ostream &print(ostream &os, const Account &a) {
  os << a.owner << " " << a.balance << "\n"
     << a.daily_tbl[0];
  return os;
}

int main() {
  Account act1;
  Account act2("Zhang San");
  Account act3("Li Si", 100.50);

  print(cout, act1) << endl;
  print(cout, act2) << endl;
  print(cout, act3) << endl;

  return 0;
}
