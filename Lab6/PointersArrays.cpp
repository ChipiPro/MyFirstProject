// LAB 6, PART 3: Pointers and arrays
#include <iostream>
using namespace std;

int main() {

    int numbersArray[5];                      // array of 5 ints (positions 0 to 4)

    int * pPointer = nullptr;

    pPointer = numbersArray;                  // an array's NAME is the address of its first element
                                              // (no & needed here)

    *pPointer = 10;                           // first element = 10

    pPointer++;                               // pointer arithmetic: move to the NEXT int (second element)
    *pPointer = 20;                           // second element = 20

    pPointer = &numbersArray[2];              // & of element 2 = address of the third element
    *pPointer = 30;                           // third element = 30

    pPointer = numbersArray + 3;              // array start + 3 steps = fourth element
    *pPointer = 40;                           // fourth element = 40

    pPointer = numbersArray;                  // reset pointer back to the first element

    *(pPointer + 4) = 50;                     // go 4 elements ahead WITHOUT moving pPointer, then set it
                                              // NOTE: the handout wrote *(p+4), but the pointer is named
                                              // pPointer, so p would not compile.
                                              // The brackets matter: *pPointer + 4 would mean "value + 4"

    for (int n = 0; n < 5; n++) {             // print all 5 elements
        cout << numbersArray[n] << ", ";
    }
    cout << endl;                             // expected: 10, 20, 30, 40, 50,

    return 0;
}
