#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using namespace placeholders;

auto check_size(const string& str, size_t sz) {
    return str.size() < sz;
}

int main() {
    vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7 };
    string str("123");
    auto result = find_if(vec.begin(), vec.end(), bind(check_size, str, _1));
    if (result != vec.end())
        cout << *result << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
