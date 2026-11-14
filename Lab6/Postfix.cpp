// LAB 6, PART 5: Postfix increment (x++)
#include <iostream>
using namespace std;

int main() {

    int x = 3;

    // POSTFIX: the OLD value is used first, then x is increased.
    int y = x++;                              // y gets 3, then x becomes 4

    cout << "x: " << x << endl;               // 4
    cout << "y: " << y << endl;               // 3

    return 0;
}
