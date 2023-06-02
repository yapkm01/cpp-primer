#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main() {
	vector<char> v{'p', 'e', 'z', 'y'};
	string str(v.cbegin(), v.cend());
	cout << str << endl;

	return 0;
}
