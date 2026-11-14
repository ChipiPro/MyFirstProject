// LAB 6, PART 2: Indirection (changing a variable THROUGH a pointer)
#include <iostream>
using namespace std;

int main() {

    int firstValue;                           // two empty variables
    int secondValue;

    int * pPointer = nullptr;                 // pointer that points at nothing yet

    pPointer = &firstValue;                   // point at firstValue
    *pPointer = 10;                           // * in front = "go to the address and change what is there"
                                              // so this sets firstValue to 10 (indirection)

    pPointer = &secondValue;                  // re-aim the SAME pointer at secondValue
    *pPointer = 20;                           // this sets secondValue to 20 (firstValue is untouched)

    cout << "firstValue is " << firstValue << '\n';     // prints 10
    cout << "secondValue is " << secondValue << '\n';   // prints 20

    return 0;
}
