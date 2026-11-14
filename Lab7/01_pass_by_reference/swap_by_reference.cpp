// LAB 7 - PART 1a: Swap two integers using REFERENCES
#include <iostream>
using namespace std;

// 'int& a' means: a is another NAME for the caller's variable (no copy is made).
// So changing a here changes the original variable in main.
void SwapNumbers(int& a, int& b) {
    int temp = a;      // keep a's value safe in a temporary box
    a = b;             // a takes b's value
    b = temp;          // b takes the saved old value of a
}                      // MISTAKE: without the & signs, you would swap COPIES and main would not change

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl;   // 25
    cout << "varB before swap: " << varB << endl;   // 100

    SwapNumbers(varA, varB);                        // just pass the variables normally; the & is in the function

    cout << "varA after swap: " << varA << endl;    // 100
    cout << "varB after swap: " << varB << endl;    // 25

    return 0;
}
