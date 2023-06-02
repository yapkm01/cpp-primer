#include <vector>
using namespace std;

class A {
	public:
		A(int x): _x{x} {}
	private:
		int _x;
};

int main() {
	// vector <A> v1(10); this failed due to class A without default ctor
	vector <A> v2(10, A(2));
	return 0;
}
