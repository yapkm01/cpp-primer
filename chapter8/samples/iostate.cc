#include <iostream>
#include <sstream>
using namespace std;

int main() {
	stringstream ss;

	ss.clear(ss.goodbit);
	cout << "sstream goodbit :- " << ss.rdstate() << endl;

	ss.clear(ss.badbit);
	cout << "sstream badbit :- " << ss.rdstate() << endl;

	ss.clear(ss.eofbit);
	cout << "sstream eofbit :- " << ss.rdstate() << endl;

	ss.clear(ss.failbit);
	cout << "sstream failbit :- " << ss.rdstate() << endl;

	return 0;
}
