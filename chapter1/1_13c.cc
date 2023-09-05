#include <iostream>
using namespace std;
int main() {
	int i1 = 0, i2 = 0;
	cout << "Enter first integer "; 
	cin >> i1;
	cout << "Enter second integer "; 
	cin >> i2;
	if (i1 > i2) {
		int temp = i1;
		i1 = i2;
		i2 = temp;
	}
	for (int i = i1; i <= i2;)
		cout << "Count = " << i++ << endl;
	return 0;
}
