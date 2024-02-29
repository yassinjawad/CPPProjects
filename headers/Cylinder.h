// pre-processor directive
#include "Circle.h"

// use C++ standard library namespace
using namespace std;

// declare a Cylinder class
class Cylinder : public Circle
{
    private:
        // declare fields
        int height;
        double volume;
    public: 
        // define constructors
        Cylinder()
        {
            // when calling a super-class member, the call must be 
            // perfixed with the name of the super-class and the 
            // resolution operator
            this->Circle::setRadius(0);
            height = 0;
        }

        Cylinder(int radius, int height)
        {
            if (radius < 0) {
            // throw an exception
            throw invalid_argument("Radius must be greater than or equal to zero");
            }

            if (height < 0) {
            // throw an exception
            throw invalid_argument("Height must be greater than or equal to zero");
            }

            this->Circle::setRadius(radius);
            this->height = height;
        }

        void setHeight(int height)
        {
            if (height < 0) {
            // throw an exception
            throw invalid_argument("Height must be greater than or equal to zero");
        }

            this->height = height;
        }

        void getHeight(int& height) const
        {
            height = this->height;
        }

        // define the getter for the volume field
        void getVolume(double& volume) const
        {
            volume = this->volume;  
        }

        void compute() override
        {
            double a;
            this->Circle::getArea(a);
            volume = height * a;
        }

        void printCylinder()
        {
            double a;
            this->Circle::getArea(a);
            int r;
            this->Circle::getRadius(r);
            
            cout << fixed << showpoint;
            cout << setprecision(5);

            cout << "radius=" << r << ", area=" << a << ", height=" << height << ", volume=" << volume << endl;
            
        }

        bool equalCylinder(const Cylinder& otherCylinder) const
        {
            return(height == otherCylinder.height &&
            volume == otherCylinder.volume);
        }
};