#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {

    vector<int> vec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (auto rit = vec.crbegin(); rit != vec.crend(); ++rit)
        cout << *rit << " ";
    cout << endl;

    return 0;

}
