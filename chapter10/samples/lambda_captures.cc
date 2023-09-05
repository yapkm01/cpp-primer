#include <iostream>
using namespace std;

auto sum_capture_by_value() {
	int z = 9;
	return [z](int y) {
		cout << z << " + " << y << endl;
		return z + y;
	};
}

// reference to z is lost upon returned of the lambda callable object
// therefore value of z is unpredictable
auto sum_capture_by_reference() {
	int z = 9;
	return [&z](int y) {
		cout << "z = " << z << endl;
		cout << z << " + " << y << endl;
		return z + y;
	};
}

int main() {
	auto a = sum_capture_by_value()(5);
	cout << a << endl;
	auto b = sum_capture_by_reference()(6);
	cout << b << endl;
	return 0;
}
