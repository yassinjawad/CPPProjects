// pre- processor directives
#include <iostream>
#include <string>

// define constants
#define FIRST_NAME "Yassin"
#define LAST_NAME "Alabdulaziz"
#define AGE 36
#define WEIGHT 156.52

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
    cout << FIRST_NAME << " ";
    cout << LAST_NAME << endl;
}


// this function uses cin and the extraction operator to 
// input data from stdin
void input(void){
    // declare variable to store input
    int age;
    float weight;
    // C++ has a string type
    string name;

    // prompt user for an int
    cout << "Enter your age: ";
    // cin is an object of the input stream of a C++ application 
    // << is the insertion operator and it's used to read input
    // from the input
    cin >> age;
    cout << "Entered age is: " << age << endl;

    cout << "Enter your weight: ";
    cin >> weight;
    cout << "Entered weight is: " << weight << endl;

    cout << "Enter your age and your weight sparated by a space: ";
    cin >> age >> weight;
    cout << "Entered age is " << age << "and entered weight is " << weight << endl;

    cout << "Enter your fullname: ";
    cin.ignore();
    getline (cin, name);
    cout << "Entered fullname is: " << name << endl;



}