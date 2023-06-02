#include <iostream>
#include <string>
#include <sstream>
using namespace std;

istream& read(istream& is) {
  is.clear();
  string str;
  while (is >> str)
    cout << str << " ";
  cout << endl;
  is.clear();
  return is;
}

int main() {
  string str;
  getline(cin, str);
  istringstream iss(str);
  read(iss);

  return 0;
}
