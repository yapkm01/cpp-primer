#include <iostream>
#include <cstring>
using namespace std;

int main() {
	const char* carr1 = "abc";
	const char* carr2 = "def";
	size_t new_size = strlen(carr1) + strlen(" ") + strlen(carr2) + 1;
	char carr3[new_size];

	strcpy(carr3,carr1);
	strcat(carr3," ");
	strcat(carr3,carr2);
	cout <<  carr3 << endl;
	return 0;
}
