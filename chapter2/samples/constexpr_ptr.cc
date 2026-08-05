#include <iostream>
using namespace std;

// Small Example: constexpr nullptr as sentinel (end marker)

// Sentinel value - marks the end of a pointer array
constexpr const char* SENTINEL = nullptr;

// Array of strings with nullptr as the last element (sentinel)
constexpr const char* names[] = {
	"Alice",
	"Bob",
	"Charlie",
	SENTINEL // Sentinel: marks the end of the array
};

static void printName(const char* const* arr) { // arr is: a pointer to a const pointer to a const char
	while (*arr != SENTINEL) { // Loop until we hit the sentinel
		cout << *arr << endl;
		++arr;
	}
}

// Count elements until nullptr sentinel (compile-time capable)
static constexpr int countUntilSentinel(const char* const* arr) { // arr is: a pointer to a const pointer to a const char
	int count = 0;
	while (arr[count] != SENTINEL) {
		++count;
	}
	return count;
}

int main() {
	static constexpr int i = 42;
	constexpr const int* p = &i; // Notice that pointer p which has the address of i, which is a constant 
				     // expression with automatic (non-static) storage. Hence constexpr pointer p
				     // requires static storage of i.
	cout << "== Names in array ==\n";
	printName(names);

	// Count elements at compile time using nullptr sentinel
	constexpr int name_count = countUntilSentinel(names);
	static_assert(name_count == 3, "Should have 3 names");

	cout << "\nTotal names: " << name_count << endl;
	cout << "Sentinel (nullptr) detected at the end\n";

	return 0;
}
