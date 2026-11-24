// Part 4: Prefix increment (++x)
#include <iostream>
using namespace std;

int main() {
    int x = 3;

    // Increment x first, then assign the updated value to y
    int y = ++x;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}
