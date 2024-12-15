#include <iostream>
#include <string>
using namespace std;

template<typename Arr>
void print(const Arr& arr) {
    for (const auto& elem : arr)
        cout << elem << endl;
}

int main() {
    string s[] = { "ssss", "aaa", "ssssss" };
    char c[] = { 'a', 'b', 'c', 'd' };
    int  i[] = { 1 };
    print(i);
    print(c);
    print(s);

    return 0;
}
