#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> ivec;	
	for (int i; cin >> i; ivec.push_back(i));
	for (auto j : ivec)
		cout << j << " " << endl;
}
