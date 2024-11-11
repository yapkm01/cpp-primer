#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main() {
    unique_ptr<string> p1(new string("pezy"));
    // unique_ptr<string> p2(p1); // copy
    //                      ^
    // Error: use of deleted function
    //
    // unique_ptr<string> p3 = p1; // assign
    //                      ^
    // Error: use of deleted function
    cout << *p1 << endl;
    p1.reset(nullptr);
    return 0;
}
