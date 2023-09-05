#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main() {
	vector <int> v{10,11,12};
	int arr[v.size()];

	for (vector<int>::size_type i=0; i < v.size(); i++)
	       	arr[i] = v[i];

	for (auto i : arr)
		cout << i << " " << endl;
	return 0;
}
