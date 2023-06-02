#include <string>
#include <iostream>
using namespace std;

typedef string Type;

Type initVal();  // string

class Exercise {
public:
  typedef double Type;
  Type setVal(Type);	// double setVal(double)
  Type initVal();  	// double initVal()

private:
  int val;
};

//Type Exercise::setVal(Type parm) {  // Error: int Exercise::setVal(double parm)
Exercise::Type Exercise::setVal(Type parm) {  // double Exercise::setVal(double parm)
  val = parm + initVal();
  return val;
}

Exercise::Type Exercise::initVal() {
  return 0;
}

int main() {
  return 0;
}
