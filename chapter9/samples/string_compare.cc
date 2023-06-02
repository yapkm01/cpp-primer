#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1 = "geeks";
	string str2 = "geeks";

	cout << (str1 == str2) << endl;
	cout << (str1.compare(str2)) << endl;

	return 0;
}
