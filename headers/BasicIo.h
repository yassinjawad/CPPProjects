// pre- processor directives
#include <iostream>
#include <string>

// define constants
#define FIRST_NAME "Yassin"
#define LAST_NAME "Alabdulaziz"
#define AGE 36
#define WEIGHT 120.55

// using C++ standard library namespace
using namespace std;

// this function uses cout and the insertion operator
// to write data to stdout
void output(void) {
    // cout is an object of the output stream of a C++ 
    // application that is used to output information
    // to either the terminal or a file.
    // << is the insertion operator and it's used in conjunction
// with cout to show what is being output and to concatenate
// what is being output.
// a newline character isn't appended to the end of the
// output, so we must use the endl command.
    cout << "Your first name is " << FIRST_NAME << endl;
    cout << "Your last name is " << LAST_NAME << endl;
    cout << "Your age is " << AGE << endl;
    cout << "Your weight is " << WEIGHT << endl;
}

