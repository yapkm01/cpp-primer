#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[10];
    for (auto i = 0; i < 10; ++i)
	arr[i] = i;

    int arr2[10];
    for (auto i = 0; i < 10; ++i)
        arr2[i] = arr[i];

    for (auto i = 0; i < 10; ++i)
        cout << arr2[i] << " ";
    cout << endl;

    vector <int> v(10);
    for (auto i = 0; i < 10; ++ i)
        v[i] = i;

    vector <int> v2(v);
    for (auto i = 0; i < 10; ++i)
	    cout << v[i] << " ";
    cout << endl;

    return 0;
}
