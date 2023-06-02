#include <iostream>
using namespace std;

void divider() {
    cout << "----------------------------------------" << endl;
}

void print(const int *ival) {
    cout << "Output from function 'print(const int *ival)'"
         << endl;
    cout << *ival << endl;
    divider();
}

void print(const char *cp) {
    cout << "Output from function 'print(const char *cp)'"
         << endl;
    if (cp) {
        while (*cp) {
            cout << *cp++ << endl;
        }
    }
    divider();
}

void print(const int *beg, const int *end) {
    cout << "Output from function 'print(const int *beg, const int *end)'"
         << endl;
    while (beg != end) {
        cout << *beg++ << endl;
    }
    divider();
}

void print(const int ia[], size_t size) {
    cout << "Output from function 'print(const int ia[], size_t size)'"
         << endl;
    for (size_t i = 0; i != size; ++i) {
        cout << ia[i] << endl;
    }
    divider();
}

void print(int (&arr)[2]) {
    cout << "Output from function 'print(int (&arr)[2])'"
         << endl;
    for (auto elem : arr) {
        cout << elem << endl;
    }
    divider();
}

int main() {
    int i = 0;
    int j[2] = { 0, 1 };
    char c[3] = "ij";

    print(&i);
    print(c); // variables i and j can't be used
    print(begin(j), end(j));
    print(j, end(j) - begin(j));
    print(j);

    return 0;
}
