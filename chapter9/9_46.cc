#include <iostream>
#include <string>
using namespace std;

auto add_pre_and_suffix(string name, const string& pre, const string& su) {
	name.insert(0, pre);
	name.insert(name.size(), su);
	return name;
}

int main() {
	string name("alan");
	cout << add_pre_and_suffix(name, "Mr.", ",Jr.");
	return 0;
}
