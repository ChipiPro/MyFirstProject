// Polygon.cpp : Implementation of the Polygon class
#include "Polygon.h"
#include <iostream>
using namespace std;

// Set width and height of the polygon
void Polygon::SetValues(int width, int height)
{
    mWidth = width;
    mHeight = height;
}

// Print the area by calling the derived class's Area() method via the this pointer
void Polygon::PrintArea()
{
    cout << this->Area() << '\n';
}
