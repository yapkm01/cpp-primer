#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	vector<const char*> vc1 {"abc","bcd"};
	vector<const char*> vc2 {"abc","bcd","cde"};
	vector<const char*> vc3 {"abc","bcf"};
	// compiler will optimize using same memory location for same literal
	// equal algorithm on pointer uses address location
	cout << equal(vc1.cbegin(), vc1.cend(), vc2.cbegin()) << endl; // yields true
	cout << equal(vc1.cbegin(), vc1.cend(), vc3.cbegin()) << endl; // yields false

	return 0;

}
