
#ifndef DEBUGDELETER_H_
#define DEBUGDELETER_H_

#include <iostream>

class DebugDeleter {
	public:
		DebugDeleter(std::ostream& s = std::cerr) : os(s) {} 

		template <typename T>
		void operator()(T *p) const {
			os << "deleting unique_ptr" << std::endl; delete p;
	       	}
	private:
		std::ostream &os;
};

#endif
