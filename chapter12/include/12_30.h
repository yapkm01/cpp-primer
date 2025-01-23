#ifndef TEXTQUERY_H
#define TEXTQUERY_H

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

#ifndef QUERYRESULT_H
#define QUERYRESULT_H

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
