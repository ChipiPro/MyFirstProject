// LAB 6, OPTIONAL: the four pointer + ++ combinations from page 5 of the handout
// Each case is split into small steps, so it is easy to see what happens.
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* pPointer = arr;                      // points at arr[0]
    int result;

    // 1) *pPointer++  means *(pPointer++): read the value at the OLD address, THEN move the pointer
    result = *pPointer++;                     // result = 10, pointer now on arr[1]
    cout << "*pPointer++   gives " << result << ", pointer now on " << *pPointer << endl;   // 10, 20

    // 2) *++pPointer  means *(++pPointer): move the pointer FIRST, then read
    result = *++pPointer;                     // pointer moves to arr[2], result = 30
    cout << "*++pPointer   gives " << result << ", pointer now on " << *pPointer << endl;   // 30, 30

    pPointer = arr;                           // reset to arr[0]

    // 3) ++*pPointer  means ++(*pPointer): increase the VALUE the pointer points to. Pointer stays put.
    result = ++*pPointer;                     // arr[0] becomes 11, result = 11
    cout << "++*pPointer   gives " << result << ", arr[0] is now " << arr[0] << endl;       // 11, 11

    // 4) (*pPointer)++ : use the value, THEN increase it
    result = (*pPointer)++;                   // result = 11 (old value), arr[0] becomes 12
    cout << "(*pPointer)++ gives " << result << ", arr[0] is now " << arr[0] << endl;       // 11, 12

    return 0;
}
