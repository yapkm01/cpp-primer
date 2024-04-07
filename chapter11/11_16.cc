#include <map>
#include <iostream>
using namespace std;

int main() {
	map<int, int> mi;
	int a, b;
	while (cin >> a >> b) {
		auto it = mi.find(a);
		if (it != mi.end())
			it->second = b;
		else
			mi.insert({a, b});
	}

	for (auto it = mi.cbegin(); it != mi.cend(); ++it)
		cout << it->first << " : " << it->second << endl;

	return 0;
}
