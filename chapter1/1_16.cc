#include <iostream>
using namespace std;

int main() {
	int i, sum=0;
	cout << "Please enter a set of integers" << endl;
	while (cin >> i)
	   sum+=i;
	cout << "Sum of all read integers = " << sum << endl;
	return 0;
}
