#include <vector>
#include <iostream>
using namespace std;

int main(){
	vector<string> v;
	for (string buffer; cin >> buffer;) {
		v.push_back(buffer);
		cout << v.capacity() << " ";
	}

	cout << endl;
	return 0;
}
