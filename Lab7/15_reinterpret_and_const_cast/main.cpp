// LAB 7 EXERCISE: "Read about reinterpret_cast and const_cast"
// This small program shows what each one does.
#include <iostream>
#include <cstdint>                 // uintptr_t: an integer big enough to hold an address
using namespace std;

// A function that (badly) wants a NON-const pointer, though it does not really change anything.
void printValue(int* p) {
    cout << "Value seen through the pointer: " << *p << endl;
}

int main() {

    // ---------------- reinterpret_cast ----------------
    // Re-reads the SAME bits as a different type. No conversion happens and nothing is checked.
    int number = 65;
    int* pNumber = &number;

    uintptr_t addressAsInteger = reinterpret_cast<uintptr_t>(pNumber);   // pointer -> integer
    cout << "Address as an integer: " << addressAsInteger << endl;

    int* backAgain = reinterpret_cast<int*>(addressAsInteger);           // integer -> pointer (same address)
    cout << "Value after casting back: " << *backAgain << endl;          // 65

    char* asBytes = reinterpret_cast<char*>(pNumber);                    // look at the int as raw bytes
    cout << "First byte of the int 65 as a char: " << *asBytes << endl;  // 'A' on a little-endian PC

    // ---------------- const_cast ----------------
    // Adds or REMOVES const from a pointer or reference. Nothing else.
    int normalVariable = 10;                    // NOT really const
    const int* pConst = &normalVariable;        // a pointer that promises not to change the value
    printValue(const_cast<int*>(pConst));       // remove const so the function accepts it

    int* pWritable = const_cast<int*>(pConst);
    *pWritable = 99;                            // allowed, because the real variable was never const
    cout << "normalVariable is now: " << normalVariable << endl;         // 99

    // DANGER: if the original object was declared const (const int x = 5;), writing to it through a
    // const_cast pointer is undefined behaviour. const_cast is only safe when the object was not const.

    return 0;
}
