#ifndef ISSHORTER_H
#define ISSHORTER_H

#include <string>

inline bool isShorter(const std::string& s1, const std::string& s2) {
    return s1.size() < s2.size();
}

#endif
