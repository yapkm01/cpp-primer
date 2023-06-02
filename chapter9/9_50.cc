#include <iostream>
#include <string>
#include <vector>
using namespace std;

auto sum_for_int(vector<string> const& v) {
	int sum = 0;
	for (auto const& s : v)
		sum += stoi(s);
	return sum;
}

auto sum_for_float(vector<string> const& v) {
	float sum = 0.0;
	for (auto const& s : v)
		sum += stof(s);
	return sum;
}

int main() {
	vector<string> v = {"1", "2", "3", "4.5"};
	cout << sum_for_int(v) << endl;
	cout << sum_for_float(v) << endl;
	return 0;
}
