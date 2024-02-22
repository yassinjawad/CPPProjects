// pre-processor directive
#include <iostream>

// declare a struct for a person that has two fields
struct Person
{
    // declare dields
    float heightInMeters;
    int weightInKilos;
};


// use type definition to declare a struct.
// a type definition defie an alias  for a struct
typedef struct Structs
{
    // declare dields
    float heightInMeters;
    int weightInKilos;
} PersonType; // this is the alias


// use C++ standard library namespace
using namespace std;

void accessStructMembers(void) {
    // declare a Person struct
    Person person;

    person.heightInMeters = 1.8;
    person.weightInKilos = 96;

    cout << "Person's weight is " << person.weightInKilos << " Kilograms" << endl;
    cout << "Person's height is " << person.heightInMeters << " Meters" << endl;

    // declare a person struct using the type definition and alias 
    PersonType p;

    p.heightInMeters = 1.8;
    p.weightInKilos = 96;

    cout << "Person's weight is " << p.weightInKilos << " Kilograms" << endl;
    cout << "Person's height is " << p.heightInMeters << " Meters" << endl;
}

// this function has a person struct paramerter
float bodyMassIndex( PersonType p){
    return p.weightInKilos / (p.heightInMeters * p.heightInMeters);
}