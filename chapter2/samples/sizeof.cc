#include <iostream>
using namespace std;

int main() {

	cout << "******* character types *******" << endl;
	cout << "sizeof (char) :- " << sizeof(char) << endl;
	cout << "sizeof (signed char) :- " << sizeof(signed char) << endl;
	cout << "sizeof (unsigned char) :- " << sizeof(unsigned char) << endl;
	cout << "sizeof (wchar_t) :- " << sizeof(wchar_t) << endl;
	// char8_t since c++20
	cout << "sizeof (char8_t) :- " << sizeof(char8_t) << endl;
	cout << "sizeof (char16_t) :- " << sizeof(char16_t) << endl;
	cout << "sizeof (char32_t) :- " << sizeof(char32_t) << endl;

	cout << "******* integral types *******" << endl;
	cout << "sizeof (short) :- " << sizeof(short) << endl;
	cout << "sizeof (signed short) :- " << sizeof(signed short) << endl;
	cout << "sizeof (unsigned short) :- " << sizeof(unsigned short) << endl;
	cout << "sizeof (int) :- " << sizeof(int) << endl;
	cout << "sizeof (signed int) :- " << sizeof(signed) << endl;
	cout << "sizeof (unsigned int) :- " << sizeof(unsigned) << endl;
	cout << "sizeof (long) :- " << sizeof(long) << endl;
	cout << "sizeof (signed long) :- " << sizeof(signed long) << endl;
	cout << "sizeof (unsigned long) :- " << sizeof(unsigned long) << endl;
	cout << "sizeof (long long) :- " << sizeof(long long) << endl;
	cout << "sizeof (signed long long) :- " << sizeof(signed long long) << endl;
	cout << "sizeof (unsigned long long) :- " << sizeof(unsigned long long) << endl;

	cout << "******* floating point types *******" << endl;
	cout << "sizeof (float) :- " << sizeof(float) << endl;
	cout << "sizeof (double) :- " << sizeof(double) << endl;
	return 0;
}
