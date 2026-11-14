// LAB 6, PART 4: Prefix increment (++x)
#include <iostream>
using namespace std;

int main() {

    int x = 3;

    // PREFIX: x is increased FIRST, then the new value is used.
    int y = ++x;                              // x becomes 4, then y gets 4

    cout << "x: " << x << endl;               // 4
    cout << "y: " << y << endl;               // 4

    return 0;
}
