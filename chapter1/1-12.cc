/* Sum value from -100 to 100 inclusive */
#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;
	cout << "Final sum = " << sum << endl;
	return 0;
}
