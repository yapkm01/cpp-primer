/*
 * Exercise 1.15:
 * Write programs that contain the common errors discussed in
 * the box on page 16. Familiarize yourself with the messages the compiler
 * generates.
 */

#include <iostream>

int main ( { // error: missing ) in parameter list for main
	     //
    // error: used colon, not a semicolon, after endl
    std::cout << "Read each file." << std::endl:
    // error: missing quotes around string literal
    std::cout << Update master. << std::endl;
    // error: second output operator is missing
    std::cout << "Write new master." std::endl;
      
    int v1 = 0, v2 = 0;
    // error: uses "v" not "v1"
    std::cin >> v >> v2;
    // error: cout not defined; should be std::cout
    cout << v1 + v2 << std::endl;
    // error: missing ; on return statement 
    return 0

}
