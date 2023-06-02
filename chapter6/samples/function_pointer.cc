#include <iostream>
using namespace std;

void print_even_num(const int *, const int *);
void print_odd_num(const int *, const int *);
void (*fn)(const int *, const int *);

int main() {

	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	fn=print_even_num;
	fn(cbegin(arr), cend(arr));
	fn=print_odd_num;
	fn(cbegin(arr), cend(arr));

	return 0;

}

void print_even_num(const int *beg, const int *end) {
	while (beg != end) {
		if (*beg % 2 == 0) {
			cout << "Even number :- " << *beg << endl;
		}
		++beg;
	}
}

void print_odd_num(const int *beg, const int *end) {
	while (beg != end) {
		if (*beg % 2 != 0) {
			cout << "Odd number :- " << *beg << endl;
		}
		++beg;
	}
}
