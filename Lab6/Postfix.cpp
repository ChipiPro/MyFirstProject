// Part 5: Postfix increment (x++)
#include <iostream>
using namespace std;

int main() {
    int x = 3;

    // Assign x to y first, then increment x
    int y = x++;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    return 0;
}
