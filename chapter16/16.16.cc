/*
 * Exercise 16.16:
 * Rewrite the StrVec class (§ 13.5, p. 526) as a template named Vec.
*/

#include "16.16.h"
using namespace std;

// copy constructor
template <typename T>
Vec<T>::Vec(const Vec& v) {
	pair<T*, T*> newData=alloc_n_copy(v.begin(), v.end());
	elements = newData.first;
	first_free = cap = newData.second;
}

template <typename T>
pair<T*, T*> Vec<T>::alloc_n_copy(const T* b, const T* e) {
	T* data = alloc.allocate(e-b);
	return { data, uninitialized(b,e,data) };
}

template <typename T>
void Vec<T>::free() {
    // may not pass deallocate a 0 pointer; if elements is 0, there's no work to do
    if (elements) {
        // destroy it in reverse order.
        for(auto p = first_free; p != elements;)
            alloc.destroy(--p);
        alloc.deallocate(elements, capacity());
    }
}

template <typename T>
Vec<T>& Vec<T>::operator=(const Vec<T>& rhs) {
    // call alloc_n_copy to allocate exactly as many elements as in rhs
    pair<T*, T*> newData = alloc_n_copy(rhs.begin(), rhs.end());
    free();
    elements = newData.first;
    first_free = cap = newData.second;
    return *this;
}

// destructor
template <typename T> 
Vec<T>::~Vec() {
    free();
}

template <typename T>
void Vec<T>::push_back(const T& t) {
	chk_n_alloc();
	alloc.construct(first_free++, t);
}

template <typename T>
void Vec<T>::reallocate() {
	size_t newCapacity = size() ? 2 * size() : 1;
	T* newData = alloc.allocate(newCapacity);

	T* dest = newData;
	T* old  = elements;
	for(size_t i = 0; i != size(); ++i)
        alloc.construct(dest++, move(*old++));

	free();

	elements = newData;
	first_free = dest;
	cap = elements + newCapacity;
}

int main() {
	return 0;
}
