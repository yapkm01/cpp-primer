#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	// use string
	string str1("Mooophy"), str2("Pezy");
	if (str1 < str2)
		cout << "Mooophy < Pezy" << endl;
	else if (str1 > str2)
		cout << "Mooophy > Pezy" << endl;
	else    cout << "Mooophy = Pezy" << endl;

	// use C-Style character string
	const char* cs1 = "Wangyue";
	const char* cs2 = "Pezy";

	auto results = strcmp(cs1, cs2);
	if (cs1 < cs2)
		cout << "Wangyue < Pezy" << endl;
	else if (cs1 > cs2)
		cout << "Wangyue > Pezy" << endl;
	else    cout << "Wangyue = Pezy" << endl;

	return 0;
}
