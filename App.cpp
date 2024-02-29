// pre- processor directives
#include <iostream>
#include <new>

#include "./headers/BasicIo.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Structs.h"
// #include "./headers/Circle.h"
#include "./headers/Cylinder.h"
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

// string student = "Yassin Jawad";
// string language = "C++";
// string programmer = "Bjarne Stroustoup";
// congratulate1(student, language, programmer);

/* structs */
// accessStructMembers();

// PersonType p;

// p.heightInMeters = 1.8;
// p.weightInKilos = 96;

// cout << "Computed BMI is " << bodyMassIndex(p) << endl;

/* OOP */
// declare and initialize a Circle
Circle Circle1;

// declare local variable 
int r;
double a;

// output contents
cout << "Circle 1: ";
Circle1.printCircle();

// call circle1's setter method
Circle1.setRadius(5);

cout << "Circle 1: ";
Circle1.printCircle();

Circle1.compute();

// output content of circle1 to stdout
cout << "Circle 1: ";
Circle1.printCircle();


// call circle1's getter methods
// when calling getter methods, 
Circle1.getRadius(r);
cout << "Radius 1: " << r << endl;

Circle1.getArea(a);
cout << "Area 1: " << a << endl;

// declare and initialize
Circle Circle2(3);

// output content of circle2 to stdout
cout << "Circle 2: ";
Circle2.printCircle();

Circle2.compute();
cout << "Circle 2: ";

Circle2.printCircle();

cout << std:: boolalpha;
cout << "Circle 1 equal Circle 2? " << Circle1.equalCircle(Circle2) << endl;
cout << "Circle 1 equal Circle 2? " << (Circle1.equalCircle(Circle2) == 0 ? "false" : "true") << endl;

// declare and initialize a Cylinder object using the no-arg constructor
Cylinder cylinder1;

// declare local variable that will be used when calling the cylinder's 
// getter methods
int h;
double v;

// output the contents of cylinder1 to stdout
cout << "Cylinder 1: ";
cylinder1.printCylinder();

cylinder1.Circle::setRadius(5);
cylinder1.Circle::compute();

// output the contents of cylinder1 to stdout
cout << "Cylinder 1: ";
cylinder1.printCylinder();

cylinder1.setHeight(7);
cylinder1.compute();

// output the contents of cylinder1 to stdout
cout << "Cylinder 1: ";
cylinder1.printCylinder();

cylinder1.getHeight(h);
cout << "Height 1: " << h << endl;

cylinder1.getVolume(v);
cout << "Volume 1: " << v << endl;

Cylinder cylinder2(4, 2);

cout << "Cylinder 2: ";
cylinder2.printCylinder();

cylinder2.Circle::setRadius(5);
cylinder2.Circle::compute();

// output the contents of cylinder1 to stdout
cout << "Cylinder 2: ";
cylinder2.printCylinder();


cout << std:: boolalpha;
cout << "Circle 1 equal Circle 2? " << Circle2.equalCircle(Circle2) << endl;
cout << "Circle 1 equal Circle 2? " << (Circle2.equalCircle(Circle2) == 0 ? "false" : "true") << endl;


return 0;
}