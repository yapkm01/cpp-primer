#include <iostream>
#include <string>
using namespace std;

int main() {

	string str1 = "geeksforgeeks a computer science";
	string str2 = "geeks";

	// find first occurrence of "geeks"
	string::size_type found = str1.find(str2);
	cout << found << endl;

	// find next occurrence of "geeks"
	// Note "geeks" is passed as c style char array
	const char* cp1 = "geeks";
	found = str1.find(cp1, found+1);
	cout << found << endl;

	const char* cp2 = "foreman";	
	found = str1.find(cp2, 0, 4);
	cout << found << endl;

	found = str1.find(cp2, 0, 3);
	cout << found << endl;

	return 0;

}
