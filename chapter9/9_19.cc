#include <deque>
#include <list> // 1. New header
#include <iostream>
#include <string>
using namespace std;

int main() {
	// deque<string> words;
	list<string> words; // 2. new variable
	string word;
	while (cin >> word)
		words.push_back(word);

	// 3. for (deque<string>::const_iterator it = words.cbegin();
	//    Note that if auto is used here, then nothing needs change.
	for (list <string>::const_iterator it = words.cbegin();
			it != words.cend(); ++it)
		cout << *it << " ";
	cout << endl;

	return 0;
}
