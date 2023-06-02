#include<iostream>
#include "./include/6_9.h"
using namespace std;

int main() {
    cout << "Factorial" << endl
         << "Enter an integer: ";
    int userInput;
    cin >> userInput;

    cout << userInput << "! = " << fact(userInput) << endl;
    return 0;
}
