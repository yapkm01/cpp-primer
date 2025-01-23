#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
    // dynamically allocated array of char
    char *concatenate_string = new char[strlen("hello " "world") + 1]();
    strcat(concatenate_string, "hello ");
    strcat(concatenate_string, "world");
    cout << concatenate_string << endl;
    delete [] concatenate_string;
    
    // string
    string str1{ "hello " }, str2{ "world" };
    cout << str1 + str2 << endl;
    return 0;
}
