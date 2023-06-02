#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.reserve(10);
    fill_n(v.begin(), 10, 0);
    cout << "v.capacity(): " << v.capacity() << endl;
    cout << "v.size(): " << v.size()<< endl;
    return 0;
}
