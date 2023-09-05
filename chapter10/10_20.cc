#include <iostream>
#include <vector>
using namespace std;

auto closure_wrapper() {
    int max_length = 6;
    return [max_length](string const& s) {
	    return s.size() > (max_length);
    };
}

size_t biggerThan6(vector<string> const& v) {
    return count_if(v.cbegin(), v.cend(), closure_wrapper());
}

int main() {
	vector<string> v{ "12345678", "alan", "moophy", "1234567", "1234567", "1234567", "1234567" };
    	cout << biggerThan6(v) << endl;
	return 0;
}

