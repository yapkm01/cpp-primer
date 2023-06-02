#include <forward_list>
#include <string>
#include <iostream>
using namespace std;

void find_and_insert(forward_list<string>& list, string const& to_find, string const& to_add) {
	auto prev = list.before_begin();
	for (auto curr = list.begin(); curr != list.end(); prev = curr++)
		if (*curr == to_find) {
			list.insert_after(curr, to_add);
			return;
		}
	list.insert_after(prev, to_add);
}

int main() {
	forward_list<string> fls{"s1", "s2", "s3"};

	for (const auto& s : fls)
		cout << s << " ";
	cout << endl;

	find_and_insert(fls, "s2", "s4");
	for (const auto& s : fls)
		cout << s << " ";
	cout << endl;

	find_and_insert(fls, "s5", "s6");
	for (const auto& s : fls)
		cout << s << " ";
	cout << endl;

	return 0;
}
