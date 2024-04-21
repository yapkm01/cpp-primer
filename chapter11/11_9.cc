#include <iostream>
#include <map>
#include <list>
#include <string>
using namespace std;

int main() {
	map<string, list<int>> words{
	{"ghi", {100, 200}}, {"abc", {1, 3, 5}}, {"def", {2, 4}}};

	for (const auto& w : words) {
		cout << w.first << ":";
		for (const auto& l : w.second)
			cout << " " << l;
		cout << endl;
	}

	return 0;
}
