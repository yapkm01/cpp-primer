#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    ifstream file("../data/book.txt");
    vector<string> input;
    map<string, set<decltype(input.size())>> dictionary;
    decltype(input.size()) lineNo{0};

    for (string line; getline(file, line); ++lineNo) {
        input.push_back(line);
        istringstream line_stream(line);
        for (string text, word; line_stream >> text; word.clear()) {
            remove_copy_if(text.begin(), text.end(), back_inserter(word),
			    [](unsigned char ch) { return ispunct(ch); });
            dictionary[word].insert(lineNo);
        }
    }

    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;
        auto found = dictionary.find(s);
        if (found != dictionary.end()) {
            cout << s << " occurs " << found->second.size() << (found->second.size() > 1 ? " times" : " time") << endl;
            for (auto i : found->second)
                cout << "\t(line " << i+1 << ") " << input.at(i) << endl;
        } else cout << s << " occurs 0 time" << endl;
    }
    return 0;
}
