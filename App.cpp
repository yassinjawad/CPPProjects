// pre- processor directives
#include <iostream>

#include "./headers/BasicIo.h"
// in C++ namespace is a collection of related functions,
// classes, objets, and variables

// the C++ standard library functions, classes, objets, and variables
// are in namespace name std.

// a way to bring in a specific object, function, class, or 
// variable of the std namespace into an application is with the 
// help of the using declaration.
// using std::cout;

// another way to bring in a specific object, function, class, or 
// variable of the std namespace into an application is with the 
// help of the using declaration.
using namespace std;

int main() {
    // in order to use a c++ object, like cout, we need to
    // specify that it belongs to the std namespace.
    // one way to specify is by using the scope resolution
    // operator :: in conjunction with a reference to the 
    // name of the namespace
    // std::cout << "Hello World!";
    // cout << "Hello World!";

    /* Basic Input Output */
    output();
}