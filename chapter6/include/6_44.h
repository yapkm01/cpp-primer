#ifndef ISSHORTER_H
#define ISSHORTER_H

#include <string>
using namespace std;

inline bool isShorter(const string& s1, const string& s2) {
    return s1.size() < s2.size();
}

#endif
