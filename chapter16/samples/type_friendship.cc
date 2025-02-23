#include <iostream>
using namespace std;

template <typename T>
class Bank {
    friend T;
    string secret{"Secret from the bank."};
};

class Account{
 public:
    Account() {
        Bank<Account> bank;
        cout << bank.secret << endl;
    }
};

int main(){
    Account acc;
    return 0;
}
