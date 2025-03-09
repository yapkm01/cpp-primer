#include <initializer_list>
#include <memory>
#include <string>
#include <vector>

#ifndef _16_12_
#define _16_12_

// forward declarations
template <typename> class BlobPtr;
template <typename> class Blob;
template <typename T>
bool operator==(const Blob<T>&, const Blob<T>&);
template <typename T>
bool operator!=(const Blob<T>&, const Blob<T>&);
template <typename T>
bool operator<(const Blob<T>&, const Blob<T>&);

// Blob class
template <typename T>
class Blob {
	friend class BlobPtr<T>;
	friend bool operator==<T>(const Blob<T>&, const Blob<T>&);
	friend bool operator!=<T>(const Blob<T>&, const Blob<T>&);
	friend bool operator< <T>(const Blob<T>&, const Blob<T>&);
	public:
		typedef T value_type;
		typedef typename std::vector<T>::size_type size_type;
		Blob() : data(std::make_shared<std::vector<T>>()) {}
		Blob(std::initializer_list<T> il) : data(std::make_shared<std::vector<T>>(il)) {}
		size_type size() const { return data->size(); }
		bool empty() const { return data->size(); }
		void push_back(const T& t) { data->push_back(t); }
		void push_back(const T&& t) { data->push_back(std::move(t)); }
		void pop_back();
		T& front();
		T& back();
		T& front() const;
		T& back() const;
		T& operator[](size_type n) { return (*data)[n]; }
		BlobPtr<T> begin() const;
		BlobPtr<T> end() const;
	private:
		std::shared_ptr<std::vector<T>> data;
		void check(size_type, const std::string& msg) const;
};

template <typename T>
void Blob<T>::check(size_type i, const std::string& msg) const {
	if (i >= data->size())
		throw std::out_of_range(msg);
}

template <typename T>
void Blob<T>::pop_back() {
	check(0, "pop on empty container");
	data->pop_back();
}

template <typename T>
T& Blob<T>::front() {
	check(0, "front on empty container");
	return data->front();
}

template <typename T>
T& Blob<T>::back() {
	check(0, "back on empty container");
	return data->back();
}

template <typename T>
T& Blob<T>::front() const {
	check(0, "front on empty container");
	return data->front();
}

template <typename T>
T& Blob<T>::back() const {
	check(0, "back on empty container");
	return data->back();
}

template <typename T>
BlobPtr<T> Blob<T>::begin() const { return BlobPtr<T>(*this); }

template <typename T>
BlobPtr<T> Blob<T>::end() const { return BlobPtr<T>(*this, data->size()); }

template <typename T>
bool operator==(const Blob<T>& lhs, const Blob<T>& rhs) {
	return *(lhs.data) == *(rhs.data);
}

template <typename T>
bool operator!=(const Blob<T>& lhs, const Blob<T>& rhs) {
	return !(lhs == rhs);
}

template <typename T>
bool operator<(const Blob<T>& lhs, const Blob<T>& rhs) {
	return *(lhs.data) < *(rhs.data);
}

// BlobPtr class
template <typename T>
class BlobPtr {
	public:
		BlobPtr() : curr(0) {}
		BlobPtr(const Blob<T>& a, std::size_t sz = 0) : wptr(a.data), curr(sz) {}
		T& operator*() const;
		BlobPtr& operator++();
		BlobPtr& operator--();
	private:
		std::shared_ptr<std::vector<T>> check(std::size_t, const std::string&) const;
		std::weak_ptr<std::vector<T>> wptr;
		std::size_t curr;
};

template <typename T>
T& BlobPtr<T>::operator*() const {
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

template <typename T>
BlobPtr<T>& BlobPtr<T>::operator++() {
	check(curr, "increment past end of container");
	++curr;
	return *this;
}

template <typename T>
BlobPtr<T>& BlobPtr<T>::operator--() {
	check(curr, "decrement past beginning of container");
	--curr;
	return *this;
}

template <typename T>
std::shared_ptr<std::vector<T>> BlobPtr<T>::check(std::size_t i, const std::string& msg) const {
	auto ret = wptr.lock();     // is the vector still around
	if (!ret)
		throw std::runtime_error("unbound BlobPtr");
	if (i >= ret->size())
		throw std::out_of_range(msg);
	return ret;     // otherwise, return a shared_ptr to the vector
}

#endif

