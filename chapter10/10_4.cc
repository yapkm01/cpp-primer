#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
	vector<double> vd {1.1, 0.5, 3.3};
	cout << accumulate(vd.cbegin(), vd.cend(), 0) << endl;
	return 0;
}
