#include <iostream>
using namespace std;

class B {
};

class D: private B {  // clause 1

	public:
		void t(D &d) {
			B &b = d; // regardless of access specifiers on clause 1,
			          // this line will always work
		}

};

class E: private D { // clause 2

	public:
		void u(E &e) {
			D &d = e;    // works since class D is the immediate base class regardless 
			             // of access specifiers on clause 2
			// B &b = e; // only works for public & protected on clause 2 which 
			             // means class B are inherited to class E. for private 
			             // access specifier on clause 2, it means class B inheritance
			             // does not reach class E. hence this will not work
		}

};

class F: private E { // clause 3

	public:
		void v(F &f) {
			E &e = f;      // works since class E is the immediate base class regardless
			               // of access specifiers on clause 3
			// D &d = f;   // only works if clause 2 is protected or public so that class D
			               // inheritance reaches class F
			// B &b = f;   // only works if clause 2 and clause 3 is protected or public so
			               // that class B inheritance reaches class F
		}

};

int main() {
	return 0;
}
