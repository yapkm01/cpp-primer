#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include "include/Sales_data.h"
using namespace std;

int main() {
    istream_iterator<Sales_data> in_iter(cin), in_eof;
    cout << "***" << endl;
    vector<Sales_data> vec;

    while (in_iter != in_eof) {
    cout << "***1" << endl;
        vec.push_back(*in_iter++);
    cout << "***2" << endl;
    }
    sort(vec.begin(), vec.end(), compareIsbn);
    
    for (auto& v: vec) {
	    cout << v << endl;
    }
    
    for (auto beg = vec.begin(), end = beg; beg != vec.end(); beg = end) {
        end = find_if(beg, vec.end(), [beg](const Sales_data &item){ return item.isbn() != beg->isbn(); });
        cout << accumulate(beg, end, Sales_data(beg->isbn())) << endl;
    }
    
    return 0;
}
