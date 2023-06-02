#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> ivec;
	// size should be zero; capacity is implementation defined
	cout << "ivec size :- " << ivec.size() << " capacity :- " << ivec.capacity() << endl;
	// give ivec 24 elements
	for (vector<int>::size_type ix = 0; ix != 24; ++ix)
		ivec.push_back(ix);
	cout << "ivec size :- " << ivec.size() << " capacity :- " << ivec.capacity() << endl;
	// capacity shrink to 24 if it's not
	ivec.shrink_to_fit();
	cout << "ivec size :- " << ivec.size() << " capacity :- " << ivec.capacity() << endl;
	ivec.resize(50, -1);
	// size should be 50; capacity will be >= 50 and is implementation defined
	cout << "ivec size :- " << ivec.size() << " capacity :- " << ivec.capacity() << endl;
	// reserve capacity to 100
	ivec.reserve(100);	
	cout << "ivec size :- " << ivec.size() << " capacity :- " << ivec.capacity() << endl;
	return 0;
}
