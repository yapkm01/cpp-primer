#ifndef STRBLOB_H
#define STRBLOB_H

#include <ctime>
#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <map>
#include <set>

class StrBlobPtr;

class StrBlob {

public:
    using size_type = std::vector<std::string>::size_type;
    friend class StrBlobPtr;

    StrBlobPtr begin() const;
    StrBlobPtr end() const;

    StrBlob(): data(std::make_shared<std::vector<std::string>>()) {}
    StrBlob(std::initializer_list<std::string> il): data(std::make_shared<std::vector<std::string>>(il)) {}

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const std::string& t) const { data->push_back(t); }

    void pop_back() {
        check(0, "pop_back on empty StrBlob");
        data->pop_back();
    }

    std::string& front() {
        check(0, "front on empty StrBlob");
        return data->front();
    }

    std::string& back() {
        check(0, "back on empty StrBlob");
        return data->back();
    }

    const std::string& front() const {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    const std::string& back() const {
        check(0, "back on empty StrBlob");
        return data->back();
    }

private:
    void check(size_type i, const std::string& msg) const {
        if (i >= data->size()) throw std::out_of_range(msg);
    }

private:
    std::shared_ptr<std::vector<std::string>> data;

};

#endif

#ifndef STRBLOB_PTR_H
#define STRBLOB_PTR_H

class StrBlobPtr {

public:
    StrBlobPtr(): curr(0) {}
    StrBlobPtr(const StrBlob& a, size_t sz = 0): wptr(a.data), curr(sz) {}
    bool operator!=(const StrBlobPtr& p) { return p.curr != curr; }
    std::string& deref() const {
        auto p = check(curr, "dereference past end");
        return (*p)[curr];
    }
    StrBlobPtr& incr() {
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }

private:
    std::shared_ptr<std::vector<std::string>> check(size_t i, const std::string& msg) const {
        auto ret = wptr.lock();
        if (!ret) throw std::runtime_error("unbound StrBlobPtr");
        if (i >= ret->size()) throw std::out_of_range(msg);
        return ret;
    }
    std::weak_ptr<std::vector<std::string>> wptr;
    size_t curr;

};

#endif

#ifndef TEXTQUERY_H
#define TEXTQUERY_H

class QueryResult;

class TextQuery {
public:
    TextQuery(std::ifstream&);
    QueryResult query(const std::string&) const;
private:
    StrBlob file;
    std::map<std::string, std::shared_ptr<std::set<StrBlob::size_type>>> result;
};

#endif

#ifndef QUERYRESULT_H
#define QUERYRESULT_H

class QueryResult {
public:
    friend std::ostream& print(std::ostream&, const QueryResult&);
    QueryResult(const std::string& s, std::shared_ptr<std::set<StrBlob::size_type>> set, StrBlob f) : word(s), nos(set), file(f) {}
private:
    std::string word;
    std::shared_ptr<std::set<StrBlob::size_type>> nos;
    StrBlob file;
};

std::ostream& print(std::ostream&, const QueryResult&);

#endif
