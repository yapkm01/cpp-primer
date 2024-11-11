#ifndef STR_BLOB_H
#define STR_BLOB_H

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>

class StrBlob {

public:

    using size_type = std::vector<std::string>::size_type;

    StrBlob(): data(std::make_shared<std::vector<std::string>>()) {}
    StrBlob(std::initializer_list<std::string> il): data(std::make_shared<std::vector<std::string>>(il)) {}

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const std::string& t) const{ data->push_back(t); }
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

    std::shared_ptr<std::vector<std::string>> data;

};

#endif
