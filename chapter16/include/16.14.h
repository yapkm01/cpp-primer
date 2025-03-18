
#ifndef _16_14_
#define _16_14_

#include <string>

template<unsigned H, unsigned W>
class Screen {
    public:
    	typedef std::string::size_type pos;
    	Screen() = default;
    	Screen(char c) : contents(H * W, c) {}
    	char get() const {
       		return contents[cursor];
    	}
    	Screen& move(pos r, pos c);

    private:
    	pos cursor = 0;
    	pos height = H, width = W;
    	std::string contents;
};

#endif

