#include <iostream>
#include <memory>
using namespace std;

int main() {
	int ix = 1024, *pi = &ix, *pi2 = new int(2048);
	typedef std::unique_ptr<int> IntP;

	// No matching constructor for initialization of 'IntP' (aka 'unique_ptr<int>')
	//
	// IntP p0(ix);
	
	// The code below can compile, but will cause error at run time.
        // The reason is that when the unique_ptr p1 is out of scope, delete will be called
        // to free the object. But the object is not allocate using new. Thus, an error
        // would be thrown by operating system.
	//
	// IntP p1(pi);


	// This code can compile, but cause a dangling pointer pi2 at run time.
        // The reason is that the unique_ptr will free the object the raw pointer pi2
        // is pointing to.
	
	IntP p2(pi2);

        // Same as IntP p1(p1);
	//
	// IntP p3(&ix);
	
	// ok
	IntP p4(new int(2048));


	// double free or corruption at run time
        // two unique_ptr are pointing to the same object. Thus, when both are out of
        // scope, Operating system will throw double free or corruption.
	//
	// IntP p5(p2.get());

	return 0;
}
