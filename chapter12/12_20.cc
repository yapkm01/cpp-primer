#include "include/12_20.h"
#include <fstream>
#include <iostream>
using namespace std;

StrBlobPtr StrBlob::begin() {
    return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end() {
    return StrBlobPtr(*this, data->size());
}

int main() {
    ifstream ifs("../data/book.txt");
    StrBlob blob;
    for (string str; std::getline(ifs, str); )
        blob.push_back(str);
    ifs.close();
    for (StrBlobPtr pbeg(blob.begin()), pend(blob.end()); pbeg != pend; pbeg.incr())
        cout << pbeg.deref() << endl;
    return 0;
}
