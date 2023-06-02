#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ostream* prevstr;
  ofstream ofs1;
  ofs1.open ("iotie1.txt");

  cout << "tie example 1\n";

  *cin.tie() << "This is inserted into cout\n";
  prevstr = cin.tie (&ofs1);
  *cin.tie() << "This is inserted into the file\n";
  cin.tie (prevstr);

  ofs1.close();
  cout << "tie example 2\n";

  cout << "******************" << endl;

  ofstream ofs2("iotie2.txt");
  ifstream ifs("iotie2.txt");
  string value("0");

  ofs2 << "Hello\n";
  ifs >> value;

  cout << "Result before tie: " << value << endl;
  ifs.clear();
  ifs.tie(&ofs2);
  
  ifs >> value;
  cout << "Result after tie: " << value << endl;

  return 0;
}
