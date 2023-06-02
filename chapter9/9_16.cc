#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	list<int> li{1, 2, 3, 4, 5};
	vector<int> vec1{1, 2, 3, 4, 5};
	vector<int> vec2{1, 2, 3, 4};

	// cannot compare list <int> with vector <int>
	// cout << (li <= vec1) << endl;

	// converting list to vector prior to comparision
	cout << (vector<int>(li.begin(), li.end()) == vec1 ? "true" : "false") << endl;
	cout << (vector<int>(li.begin(), li.end()) == vec2 ? "true" : "false") << endl;

	return 0;
}
