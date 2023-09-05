#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <string> svec;	
	for (string s; cin >> s; svec.push_back(s));
	for (auto t : svec)
		cout << t << " " << endl;
}
