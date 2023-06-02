#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
	vector <int> vi {1, 2, 3, 4};
	cout << accumulate(vi.cbegin(), vi.cend(), 0) << endl;
	return 0;
}
