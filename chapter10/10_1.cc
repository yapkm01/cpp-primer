#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	vector <int> v = {1, 2, 3, 4, 5, 6, 6, 6, 2};
	cout << "Count :- " << count(v.cbegin(), v.cend(), 6) << endl;
	return 0;

}
