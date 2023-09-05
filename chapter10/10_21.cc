#include <iostream>
using namespace std;

int main() {
	int i = 7;
	auto check_and_decrement = [&i]() { return i > 0 ? !--i : !i; };
	while(!check_and_decrement())
		cout << i << " ";
	cout << i << endl;
	return 0;
}
