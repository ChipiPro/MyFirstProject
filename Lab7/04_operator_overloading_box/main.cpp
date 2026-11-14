// main.cpp : tests the overloaded + operator
#include <iostream>
#include "Box.h"
using namespace std;

// Main function for the program
int main() {
    Box Box1;                      // Declare Box1 of type Box
    Box Box2;                      // Declare Box2 of type Box
    Box Box3;                      // Declare Box3 of type Box
    double volume = 0.0;           // Store the volume of a box here

    // box 1 specification
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    // box 2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    // volume of box 1
    volume = Box1.GetVolume();
    cout << "Volume of Box1 : " << volume << endl;     // 6 x 7 x 5 = 210

    // volume of box 2
    volume = Box2.GetVolume();
    cout << "Volume of Box2 : " << volume << endl;     // 12 x 13 x 10 = 1560

    // Add two objects as follows:
    Box3 = Box1 + Box2;            // C++ turns this into Box1.operator+(Box2)

    // volume of box 3
    volume = Box3.GetVolume();
    cout << "Volume of Box3 : " << volume << endl;     // (6+12) x (7+13) x (5+10) = 18 x 20 x 15 = 5400

    return 0;
}
