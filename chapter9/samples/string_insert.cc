#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {

	string s1 {"to be question"};
	// using insert at index and chaining of insert
	s1.insert(s1.size(), " or not to be question?").insert(s1.size()," Please reply");
	cout << s1 << endl;

	string s2 {"to be question"};
	// using append
	s2.append(" or not to be question? Please reply");
	cout << s2 << endl;

	string s3 {" to be question? Please reply"};
	list <char> ls {'h', 'e', 'l', 'l', 'o'};

	s3.insert(s3.cbegin(), ++ls.cbegin(), ls.cend());
	cout << s3 << endl;

	return 0;

}
