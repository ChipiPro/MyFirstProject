// main.cpp : Driver program to test the overloaded + operator for Box
#include <iostream>
#include "Box.h"
using namespace std;

int main() {
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    // Box 1 specification
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    // Box 2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    // Calculate and print volume of Box 1
    volume = Box1.GetVolume();
    cout << "Volume of Box1 : " << volume << endl;

    // Calculate and print volume of Box 2
    volume = Box2.GetVolume();
    cout << "Volume of Box2 : " << volume << endl;

    // Add Box1 and Box2 using the overloaded + operator
    Box3 = Box1 + Box2;

    // Calculate and print volume of Box 3
    volume = Box3.GetVolume();
    cout << "Volume of Box3 : " << volume << endl;

    return 0;
}
