#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector <string> svec;
	for (string word; cin >> word; svec.push_back(word));
	for (auto& str : svec)
		for (auto& ch: str)
			ch = toupper(ch);
	for (string::size_type cnt=0; cnt != svec.size(); ++cnt) {
		if (cnt != 0 && cnt % 8 == 0)
			cout <<  endl;
		cout << svec[cnt] << " ";
	}
	cout << endl;
}
