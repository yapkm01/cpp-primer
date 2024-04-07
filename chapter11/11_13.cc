#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<pair<string, int>> vec;
	string str;
	int i;

	while (cin >> str >> i) {
	//	vec.push_back(pair<string, int>(str,i));
	//	vec.push_back(std::make_pair(str, i));
        	vec.push_back({ str, i });
        //	vec.emplace_back(str, i);
	}

	for (const auto& p : vec)
		cout << "p.first = " << p.first << " " << "p.second = " << p.second << endl;

	return 0;
}
