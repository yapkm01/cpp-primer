#include <iostream>
using namespace std;

template <typename T>
class K {
	public:
		static T x;
};

template <typename T>
T K<T>::x{};

int main() {
	K<int>::x = 10;
	cout << K<int>::x << endl;
	return 0;
}
