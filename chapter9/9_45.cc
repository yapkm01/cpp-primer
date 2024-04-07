#include <iostream>
#include <string>
using namespace std;

auto add_pre_and_suffix(string name, const string& pre, const string& su) {
	name.insert(name.begin(), pre.cbegin(), pre.cend());
	return name.append(su);
}

int main() {
	string name("Wang");
	cout << add_pre_and_suffix(name, "Mr.", ", Jr.") << endl;
	return 0;
}
