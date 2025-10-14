#ifndef TEXTQUERY_H_
#define TEXTQUERY_H_

#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include <fstream>
#include <map>
#include <set>

class QueryResult;

class TextQuery {
public:
    using LineNo = std::vector<std::string>::size_type;
    TextQuery(std::ifstream&);
    QueryResult query(const std::string&) const;
private:
    std::shared_ptr<std::vector<std::string>> input;
    std::map<std::string, std::shared_ptr<std::set<LineNo>>> result;
};

#endif

#ifndef QUERYRESULT_H_
#define QUERYRESULT_H_

class QueryResult {
public:
    friend std::ostream& print(std::ostream&, const QueryResult&);
    QueryResult(const std::string& s, std::shared_ptr<std::set<TextQuery::LineNo>> set, std::shared_ptr<std::vector<std::string>> v) : word(s), nos(set), input(v) {}
private:
    std::string word;
    std::shared_ptr<std::set<TextQuery::LineNo>> nos;
    std::shared_ptr<std::vector<std::string>> input;
};

std::ostream& print(std::ostream&, const QueryResult&);

#endif

#ifndef DEBUGDELETE_H_
#define DEBUGDELETE_H_

class DebugDelete {
public:
	DebugDelete(std::string prc, std::ostream& s = std::cerr): prc(prc), os(s) {}
	template <typename T> void operator()(T* p) const {
		os << "prc = " << prc << " deleting shared_ptr" << std::endl;
	       	delete p;
	}

private:
	std::string prc;
	std::ostream &os;
};

#endif
