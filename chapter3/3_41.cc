#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	int arr[] = {1,2,3,4};
	vector <int> v(begin(arr), end(arr));

	for (auto i : v)
		cout << i << " " << endl;

	return 0;
}
