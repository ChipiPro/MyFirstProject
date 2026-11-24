// Part 3: Pointers and arrays
#include <iostream>
using namespace std;

int main() {
    int numbersArray;

    int * pPointer = nullptr;

    // Assign the address of the first element to the pointer
    pPointer = numbersArray;
    *pPointer = 10;

    // Increment the pointer to assign a value to the second element
    pPointer++;
    *pPointer = 20;

    // Assign the address of the third element to the pointer
    pPointer = &numbersArray;
    *pPointer = 30;

    // Assign the address of the fourth element using pointer arithmetic
    pPointer = numbersArray + 3;
    *pPointer = 40;

    // Reset pointer to the first element and assign the fifth element
    pPointer = numbersArray;
    *(pPointer + 4) = 50;

    // Output all elements in the array
    for (int n = 0; n < 5; n++) {
        cout << numbersArray[n] << ", ";
    }
    cout << endl;

    return 0;
}
