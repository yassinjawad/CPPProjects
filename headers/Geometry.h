// pre-processor directive
#include <iostream>

// use C++ standard library namespace
using namespace std;

// declare class
class Geometry
{
    // class members (fields, constructors, methods) may have 
    // the following mdifiers: public, private, protected
    // this class is doing to be an abstract class (like a
    // java interface) b/c its only method is going to be virtual
    // it will have a declaration only and not a body.
    public:
    // must use keyword virtual 
        virtual void compute() = 0;
};