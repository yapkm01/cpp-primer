#include <iostream>
using namespace std;

template <typename> class Pair;
template <typename T> using Point = Pair<T>;

template <typename T>
struct Pair {
    T first{};
    T second{};
};

template <typename T>
void print(const Pair<T>& p) {
    cout << p.first << ' ' << p.second << endl;
}

int main() {
    Point <int> p { 1, 2 };
    print(p);

    return 0;
}
