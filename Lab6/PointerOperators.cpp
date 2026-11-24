// Pointer and increment operator combinations
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* pPointer = arr;
    int result;

    // Dereference current pointer, then increment the pointer
    result = *pPointer++;
    cout << "*pPointer++   gives " << result << ", pointer now on " << *pPointer << endl;

    // Increment the pointer first, then dereference it
    result = *++pPointer;
    cout << "*++pPointer   gives " << result << ", pointer now on " << *pPointer << endl;

    // Reset pointer to the start of the array
    pPointer = arr;

    // Increment the value pointed to by pPointer
    result = ++*pPointer;
    cout << "++*pPointer   gives " << result << ", arr[0] is now " << arr[0] << endl;

    // Dereference the value first, then increment it
    result = (*pPointer)++;
    cout << "(*pPointer)++ gives " << result << ", arr[0] is now " << arr[0] << endl;

    return 0;
}
