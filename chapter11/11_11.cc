#include "include/Sales_data.h"
#include <set>
using namespace std;
using Less = bool (*)(const Sales_data&, const Sales_data&);

multiset<Sales_data, Less> bookstore(Less);

bool compare(const Sales_data& lhs, const Sales_data& rhs) {
    return lhs.isbn() < rhs.isbn();
}

int main() {
    bool (*fnc)(const Sales_data&, const Sales_data&) = compare;
    multiset <Sales_data, Less> bs = bookstore(fnc);
    multiset <Sales_data, Less>::iterator it = bs.cbegin();
    for (; it != bs.end(); it++) {
	    cout << it->isbn() << endl;
    }
    return 0;
}

multiset <Sales_data, Less> bookstore(Less fnc) {
	multiset <Sales_data, Less> ms(fnc);
	Sales_data sd1("isbn-232092");
	Sales_data sd2("isbn-192322");
	Sales_data sd3("isbn-023233");
	Sales_data sd4("isbn-929922");
	ms.insert(sd1);
	ms.insert(sd2);
	ms.insert(sd3);
	ms.insert(sd4);
	return ms;
}
