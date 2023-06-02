#include <iostream>
#include <vector>
using namespace std;

template<typename T>
typename T::value_type sum(const T& cntr) {
	typename T::value_type total = 0;
	for (const auto& e : cntr)
		total += e;
	return total;
}

int main() {
	vector <int> v1 {1, 2, 3, 4, 5};
	cout << sum(v1) << endl;
	return 0;
}
