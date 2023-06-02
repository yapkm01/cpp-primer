#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	ifstream ifs("./9_49.dat");
	if (!ifs) return -1;

	string longest;
	auto update_with = [&longest](string const& curr) {
		if (string::npos == curr.find_first_not_of("aceimnorsuvwxz"))
			longest = longest.size() < curr.size() ? curr : longest;
	};
	for (string curr; ifs >> curr; update_with(curr));
	cout << longest << endl;

	ifs.close();
	return 0;
}
