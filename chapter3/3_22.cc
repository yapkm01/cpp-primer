// Revise the loop that printed the first paragraph in text 
// to instead change the elements in text that correspond 
// to the first paragraph to all uppercase. 
// After you’ve updated text, print its contents.

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main() {
    vector <string> text;
    for (string line; getline(cin, line); text.push_back(line + '\n'));
    for (auto it =  text.begin(); it != text.end() && !it -> empty(); ++it) 
	for (auto& s : *it) 
		s = toupper(s);

    for (auto& word : text)
        for (auto& ch : word)
        	cout << ch; 
}
