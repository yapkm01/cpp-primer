/*
 * Exercise 1.13:
 * Rewrite the exercises from § 1.4.1 (p. 13) using for loops.
 */

#include <iostream>
using namespace std;

int main() {
	int i, sum;

	sum = 0;
	for (i = 50; i <= 100; i++)   // exercise 1.9
		sum += i;
	cout << "sum is " << sum << endl;

	for (i = 10; i >= 0; i--)     // exercise 1.10
		cout << i << " ";
	cout << endl;

	int start, end;               // exericse 1.11
        cout << "Enter two integers to print numbers within range: ";
        cin >> start >> end;
	for (int i=start; i<=end;)
              cout << i++ << " ";
        cout << endl;

	return 0;
}
