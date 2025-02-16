// Exercise 1.8:
// Indicate which, if any, of the following output statements are legal:
//
// 	std::cout << "/*";
// 	std::cout << "*/";
// 	std::cout << /* "*/" */;
// 	std::cout << /* "*/" /* "/*" */;
//
// After you’ve predicted what will happen, test your answers by compiling a
// program with each of these statements. Correct any errors you encounter.
//

#include <iostream>
using namespace std;

int main() {
	// legal
	cout << "/*";
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
