// pre- processor directives
#include <iostream>
#include <new>

#include "./headers/BasicIo.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
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

    // int i, n;
    // int * p;
    // cout << "How many numbers would you like to type?";
    // cin >> i;
    // // this line of code is dynamically allocating memory
    // p = new (nothrow) int[i];
    // if (p == nullptr){
    //     cout << "Error: mamory could not be allocated";
    // } else {
    //     for (n = 0; n < i; n++) {
    //         cout << "Enter number: ";
    //         cin >> p[n];
    //     }
    //     cout << "You have entered: ";
    //     for (n = 0; n < i; n++) {
    //         cout << p[n] << ", ";
    //     }
    //     // this line of code is deallocating the memory
    //     delete[] p;
    // }

    // in order to use a c++ object, like cout, we need to
    // specify that it belongs to the std namespace.
    // one way to specify is by using the scope resolution
    // operator :: in conjunction with a reference to the 
    // name of the namespace
    // std::cout << "Hello World!";
    // cout << "Hello World!";

    /* Basic Input Output */
    // output();
    // input();

    /* Decisions */
    // decisions1();

    /* Loops */
    // loops1();

string student = "Yassin Jawad";
string language = "C++";
string programmer = "Bjarne Stroustoup";
congratulate1(student, language, programmer);
    return 0;
}