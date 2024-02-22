// pre-processor directive
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <math.h>

#include "Geometry.h"

#define PI 3.141592653689793238

// use C++ standard library namespace
using namespace std;

// declare Circle class and specify that it's a subclass of Geometry
class Circle : Geometry
{
    private:
        // declare fields
        int radius;
        double area;
    public:
        // declare constuctors
        Circle();
        Circle(int);
        // declare a setter and getter for radius field
        void setRadius(int);
        // the keyword const at the end of the method
        // declares that the method won't change any of the field values
        // attempting to do so will result in a compile error
        // the ampersand opereator
        void getRadius(int&) const;
};