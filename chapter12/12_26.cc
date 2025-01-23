#include <iostream>
#include <string>
#include <memory>
using namespace std;

void input_reverse_output_string(int n) {
    allocator<string> alloc;
    using traits_t1 = allocator_traits<decltype(alloc)>;
    auto const p = traits_t1::allocate(alloc, n);
    string s;
    auto q = p;
    while (q != p + n && std::cin >> s)
        traits_t1::construct(alloc, q++, s);
    
    while (q != p) {
        std::cout << *--q << " ";
	traits_t1::destroy(alloc, q);
    }
    alloc.deallocate(p, n);
}

int main() {
    input_reverse_output_string(5);
    return 0;
}
