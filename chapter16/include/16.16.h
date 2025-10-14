
#ifndef VEC_H_
#define VEC_H_

#include <cstddef>
#include <memory>

template <typename T>
class Vec {
public:
	// the allocator member is default initialized
	Vec(): elements(nullptr), first_free(nullptr), cap(nullptr) {}
	// copy constructor
	Vec(const Vec&);
	// copy assignment
       	Vec& operator=(const Vec&);
	// destructor
       	~Vec();
       
	void push_back(const T&); // copy the element
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }
	T* begin() const { return elements; }
	T* end() const { return first_free; }

private:
	std::allocator<T> alloc; // allocates the elements
	// used by the functions that add elements to the Vec
	void chk_n_alloc() { if (size() == capacity()) reallocate(); }
	// utilities used by the copy constructor, assignment operator, and destructor
	std::pair<T*, T*> alloc_n_copy(const T*, const T*);

	void free(); // destroy the elements and free the space
	void reallocate(); // get more space and copy the existing elements
			   
	T* elements; // pointer to the first element in the array
	T* first_free; // pointer to the first free element in the array
	T* cap; // pointer to one past the end of the array
};

#endif

