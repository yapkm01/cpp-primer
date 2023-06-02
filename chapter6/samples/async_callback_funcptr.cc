#include <iostream>
#include <string>
#include <future>
using namespace std;

using cbfp = string (*)(string);

future <string> output;

string cb(string);
void principal_func(string, cbfp);
void fn();

int main() {

	string input = string("async callback function");
	principal_func(input, &cb);
	fn();
	string returned_value = output.get();
	cout << "returned_value :- " << returned_value << endl;

	return 0;

}

string cb(string stri) {
	cout << "cb function, parameter :- " << stri << endl;
	return stri;
}

void principal_func(string input, cbfp cbfp) {
	output = async(cbfp, input);
	cout << "principal function" << endl;
}

void fn() {
	cout << "seen" << endl;
}
