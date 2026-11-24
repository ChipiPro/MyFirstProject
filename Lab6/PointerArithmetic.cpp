// Part 6: Pointer arithmetic with ++
#include <iostream>
using namespace std;

int main() {
    int* pPointer = nullptr;

    int numbersArray[3] = {10, 20, 30};

    // Assign address of the first element to pPointer
    pPointer = numbersArray;

    // Output the address of the first element
    cout << "Address at pPointer: " << pPointer << endl;
    cout << "Address of numbersArray[0]: " << &numbersArray[0] << endl;

    // Output the value of the first element
    cout << "Value at pPointer: " << *pPointer << endl;

    // Move to the second element first, then output its value
    cout << "Value at ++pPointer: " << *(++pPointer) << endl;

    // Reset pointer to the first element
    pPointer = numbersArray;

    // Output the first element's value, then increment the pointer
    cout << "Value at pPointer++: " << *(pPointer++) << endl;

    return 0;
}
