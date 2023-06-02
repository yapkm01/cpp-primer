#include <iostream>
using namespace std;

int main() {
	int arr [] = {0,1,2,3};
	for (auto p = begin(arr); p != end(arr); ++p)
		*p = 0;
	for (auto p = begin(arr); p != end(arr); ++p)
		cout << *p << endl;
}
