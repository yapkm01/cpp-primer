#include "include/12_27.h"
#include <sstream>
#include <algorithm>
using namespace std;

TextQuery::TextQuery(ifstream& ifs) : input(new vector<string>) {
    LineNo lineNo{0};
    for (string line; getline(ifs, line); ++lineNo) {
        input->push_back(line);
        istringstream line_stream(line);
        for (string text, word; line_stream >> text; word.clear()) {
            // avoid read a word followed by punctuation(such as: word, )
            remove_copy_if(text.begin(), text.end(), back_inserter(word),
			    [](unsigned char ch) { return ispunct(ch); });
            // use reference avoid count of shared_ptr add.
            auto& nos = result[word];
            if (!nos) nos.reset(new set<LineNo>);
            nos->insert(lineNo);
        }
    }
}

QueryResult TextQuery::query(const string& str) const {
    // use static just allocate once.
    static shared_ptr<set<LineNo>> nodata(new set<LineNo>);
    auto found = result.find(str);
    if (found == result.end()) return QueryResult(str, nodata, input);
    else return QueryResult(str, found->second, input);
}

ostream& print(ostream& out, const QueryResult& qr) {
    out << qr.word << " occurs " << qr.nos->size() << (qr.nos->size() > 1 ? " times" : " time") << endl;
    for (auto i : *qr.nos)
        out << "\t(line " << i+1 << ") " << qr.input->at(i) << endl;
    return out;
}

void runQueries(ifstream& infile) {
    TextQuery tq(infile);
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
}

int main() {
	ifstream file("../data/book.txt");
	runQueries(file);
	file.close();
	return 0;
}
