#include <string>
#include <iostream>
using namespace std;

class Screen {
public:
  using pos = string::size_type;
  using content_type = char;

  Screen() = default;
  Screen(pos ht, pos wd)
      : height(ht), width(wd), contents(ht * wd, ' ') {}
  Screen(pos ht, pos wd, content_type c)
      : height(ht), width(wd), contents(ht * wd, c) {}

  const content_type& get() const { return contents[cursor]; }
  const content_type& get(pos row, pos col) const;

  Screen& set(content_type c);
  Screen& set(pos row, pos col, content_type c);

  Screen& move(pos row, pos col);

  const Screen& display(ostream& os) const;
  Screen& display(ostream& os);

private:
  void do_display(ostream& os) const;

  pos cursor = 0;
  pos width = 0;
  pos height = 0;
  string contents;
};

inline
const Screen::content_type& Screen::get(pos row, pos col) const {
  return contents[row * width + col];
}

inline
Screen& Screen::set(content_type c) {
  contents[cursor] = c;
  return *this;
}

inline
Screen& Screen::set(pos row, pos col, content_type c) {
  contents[row * width + col] = c;
  return *this;
}

inline
Screen& Screen::move(pos row, pos col) {
  cursor = row * width + col;
  return *this;
}

inline
const Screen& Screen::display(ostream& os) const {
  cout << "Const Screen& Screen::display :" << endl;
  do_display(os);
  return *this;
}

inline
Screen& Screen::display(ostream& os) {
  cout << "Screen& Screen::display :" << endl;
  do_display(os);
  return *this;
}

inline
void Screen::do_display(ostream& os) const {
  for (pos i = 0; i != contents.size(); ++i) {
    os << contents[i];
    if ((i + 1) % width == 0 && i + 1 != contents.size())
      os << "\n";
  }
}

int main() {
  Screen myScreen(5, 5, 'X');
  myScreen.move(4,0).set('#').display(cout); // call nonconst version
  cout << "\n-----\n";
  myScreen.display(cout); // call nonconst version
  cout << "\n-----\n";

  Screen myScreen2(5,3,'O');
  const Screen blank(5,3,'Z');
  myScreen2.set('#').display(cout);  // call nonconst version
  cout << "\n-----\n";
  blank.display(cout);  // call const version
  cout << "\n-----\n";

  return 0;
}
