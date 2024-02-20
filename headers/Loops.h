// pre-processor directive
#include <iostream>
#include <iomanip>

using namespace std;

// create macro values (constants)
#define STOP 0
#define START 10

// create macro expressions (constants)
#define CONDITION(i) (i > STOP)

void loops1(void) {
    int i = START;

    while(CONDITION(i)) {
        // printf("%d ", i);
        cout << i << " ";
        i--;
    }
    // printf("blastoff\n");
    cout << "blastoff" << endl;
}