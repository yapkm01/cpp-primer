#include <iostream>
using namespace std;

int largestValue(int ival, const int* pval) {
    return ival > *pval ? ival : *pval;
}

int main() {
    int x = 39;
    int y = 44;

    cout << "Compare " << x << " and " << y << endl;
    cout << largestValue(x, &y) << " is larger." << endl;

    return 0;
}
