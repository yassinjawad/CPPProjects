// pre-processor directive
#include <iostream>
// #include <stdio.h>
#include <string>

// use C++ standard library namespace
using namespace std;

#define FAHRENHEIT(temp) (temp * 1.8 + 32);
// white code for functions declared in Functions.h
// this function uses perameters, all having the char * type.
// strings don't exist as a type in C like they do in Java and Python.
// in C strings are treated like an arraay of characters and are 
// referred to as the char * type.
// when you have a * in  a perameter  
// this function 
void congratulate2(string student, string language, string programmer){
    int days = programmer.length();
    // display a message to stdout
    printf("%s has done as much %s programming as %s could fit into %d days.\n", student.c_str(), language.c_str(), programmer.c_str(), days);

}
void congratulate1(string student, string language, string programmer){
    // display a message to stdout
    cout << student << " has done as much " << language << " programming as " << programmer << endl;
    congratulate2(student, language, programmer);
}

