/*
 * Exercise 1.5:
 * We wrote the output in one large statement. Rewrite the
 * program to use a separate statement to print each operand.
 */

#include <iostream>
using namespace std;

int main() {
	cout << "Enter two numbers:" << endl;
	int v1 = 0;
	int v2 = 0;
	cin >> v1 >> v2;
	cout << "The product of ";
	cout << v1;
	cout << " and ";
	cout << v2;
	cout << " is ";
	cout << v1 * v2;
	cout << endl;
	return 0;
}
