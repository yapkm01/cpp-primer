#include <deque>
#include <iostream>
#include <string>
using namespace std;

int main() {
	deque<string> words;
	string word;
	while (cin >> word)
		words.push_back(word);

	for (deque <string>::const_iterator it = words.cbegin();
			it != words.cend(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}
