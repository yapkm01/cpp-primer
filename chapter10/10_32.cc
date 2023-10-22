#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include "include/Sales_data.h"
using namespace std;

int main() {
    istream_iterator<Sales_data> in_iter(cin), in_eof;
    vector<Sales_data> vec;

    while (in_iter != in_eof)
        vec.push_back(*in_iter++);
    sort(vec.begin(), vec.end(), compareIsbn);
    
    for (auto& v: vec) {
	    cout << v << endl;
    }
    /*
    for (auto beg = vec.cbegin(), end = beg; beg != vec.cend(); beg = end) {
        end = find_if(beg, vec.cend(), [beg](const Sales_data &item){ return item.isbn() != beg->isbn(); });
        cout << accumulate(beg, end, Sales_data(beg->isbn())) << endl;
    }
    */
    
    return 0;
}
