#include <iostream>
using namespace std;

class GrantingFriendshipAsClass {
  // No forward declaration required when befriending all instantiation
  template <typename U> friend void myFriendFunction(U);
  template <typename U> friend class MyFriend;

  string secret{"Secret from GrantingFriendshipAsClass."};
};

template <typename T> class MyOtherFriend;
template <typename T>
class GrantingFriendshipAsClassTemplate{
  // No forward declaration required when befriending all instantiation
  template <typename U> friend void myFriendFunction(U);
  template <typename U> friend class MyFriend;

  friend class MyOtherFriend <T>;
  string secret{"Secret from GrantingFriendshipAsClassTemplate."};
};

template <typename T>
void myFriendFunction(T){
  GrantingFriendshipAsClass buddy;
  cout << buddy.secret << endl;

  GrantingFriendshipAsClassTemplate<double> dude;
  cout << dude.secret << endl;
}

template <typename T>
class MyFriend{
public:
  MyFriend(){
    GrantingFriendshipAsClass buddy;
    cout << buddy.secret << endl;

    GrantingFriendshipAsClassTemplate<T> dude;
    cout << dude.secret << endl;
  }
};

template <typename T>
class MyOtherFriend{
public:
  MyOtherFriend(){
    GrantingFriendshipAsClass buddy;
    //cout << buddy.secret << endl;

    GrantingFriendshipAsClassTemplate<T> dude;
    cout << dude.secret << endl;
  }
};

int main(){
  int a{2011};

  cout << "** myFriendFunction." << endl;
  myFriendFunction(a);

  cout << "** myFriend class." << endl;
  MyFriend<double> myFriend;

  cout << "** myFriend class." << endl;
  MyOtherFriend<double> myOtherFriend;

  return 0;
}
