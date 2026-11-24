// Part 2: Indirection with pointers
#include <iostream>
using namespace std;

int main() {
    int firstValue;
    int secondValue;

    int * pPointer = nullptr;

    // Point to firstValue and assign a value using indirection
    pPointer = &firstValue;
    *pPointer = 10;

    // Point to secondValue and assign a value using indirection
    pPointer = &secondValue;
    *pPointer = 20;

    cout << "firstValue is " << firstValue << '\n';
    cout << "secondValue is " << secondValue << '\n';

    return 0;
}
