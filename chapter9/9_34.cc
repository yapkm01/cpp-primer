#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> vi {1, 2, 3};
	auto iter = vi.begin();

	/* infinite loop
	   while (iter != vi.end())
	   if (*iter % 2)
	   iter = vi.insert(iter, *iter);
	   ++iter;
	   */

	while (iter != vi.end()) {
		if (*iter & 0x1) {
			iter = vi.insert(iter, *iter);
			++iter;
		}
		++iter;
	}

	for (auto i = vi.begin(); i != vi.end(); i++)
		cout << *i << " ";
	cout << endl;
	return 0;
}
