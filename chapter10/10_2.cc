#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main() {

	list<string> l = {"aa", "aaa", "aa", "cc"};
	cout << "Count :- " << count(l.cbegin(), l.cend(), "aa") << endl;
	return 0;

}
