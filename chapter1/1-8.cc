#include <iostream>
using namespace std;
int main() {
	// legal
	cout << "/*"; // legal

	// legal
	cout << "*/"; // legal

	// illegal
	// std::cout << /* "*/" */;
	// correction
	cout << /* "*/" */";

	// legal
	cout << /*  "*/" /* "/*"  */;
	return 0;
}
