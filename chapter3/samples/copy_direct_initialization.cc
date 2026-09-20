#include <iostream>
using namespace std;

class Number {
	public:
		// A single-argument constructor that takes an integer value
		// Case 1: Constructor not marked as explicit, it can be used for implicit conversion
		//
		// Number(int val): value(val) {
		// 	cout << "Constructor called with value: " << value << endl;
		// }
		
		explicit Number(int val): value(val) {
			cout << "Explicit constructor called with value: " << value << endl;
		}

		// Number(const Number& other): value(other.value) {
		// 	cout << Copy constructor called with value: " << value << endl;
		// }
		
		void print() const {
			cout << "Number: " << value << endl;
		}

	private:
		int value;
};

// This function takes a const reference Number object as a parameter
// If the constructor is not explicit, you can pass an integer directly, and it will be converted to a Number object
// if the constructor is explicit, you must create a Number object explicitly before passing it to this function
void printNumber(const Number& num) {
	num.print();
}

int main() {
	// 1. Direct Initialization
	// Looks for a constructor that matches 42. Works with or without the explicit keyword
	Number n1(42);

	// 2. Copy Initialization
	// Looks for a constructor that matches 100. Works only without the explicit keyword
	Number n2 = 100;
	printNumber(20);

	return 0;
}
