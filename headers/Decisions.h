// pre-processor directive
#include <iostream>
#include <iomanip>

// create macro values (constants)
#define NUM 34568.8

using namespace std;

void decisions1(void){
    // declare variable of type float that will be used in conditions
    float num = NUM;

    // show decimal point notation and trailing zeros on cout
    cout << fixed << showpoint;

    // show three digit to the right 
    cout << setprecision(3);

    if (num < 40000.0) {
        // printf("%.1f is less than 40000.0\n", num); // displayed
        cout << num << " is less than 40000.0" << endl;
    }

    num += num;

    if (num < 40000.0) {
        // printf("%.1f is less than 40000.0\n", num); // not displayed 
        cout << num << " is less than 40000.0"<< endl;
    } else {
        // printf("%.1f is not less than 40000.0\n", num); // displayed 
        cout << num << " is not less than 40000.0" << endl;
    }

    num = 0;

     if (num == 0.0){
        // printf("%.1f is equal to 0.0\n", num); // displayed 
        cout << num << " is equal to 0.0" << endl;
    } else if (num < 0.0) {
        // printf("%.1f is less to 0.0\n", num); // not displayed 
        cout << num << " is less to 0.0\n" << endl;
    } else {
        // printf("%.1f is greater to 0.0\n", num); // not displayed 
        cout << num << " is greater to 0.0\n" << endl;
    }
}

