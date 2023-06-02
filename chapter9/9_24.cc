#include <iostream>
#include <vector>
using namespace std;

int main() {
	std::vector<int> v;
	std::cout << v.at(0);       // terminating with uncaught exception of type std::out_of_range
	std::cout << v[0];          // Segmentation fault
	std::cout << v.front();     // Segmentation fault
	std::cout << *v.begin();    // Segmentation fault
	return 0;
}
