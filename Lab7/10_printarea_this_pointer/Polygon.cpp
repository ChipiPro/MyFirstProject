// Polygon.cpp
#include "Polygon.h"
#include <iostream>
using namespace std;

void Polygon::SetValues(int width, int height)
{
    mWidth = width;
    mHeight = height;
}

void Polygon::PrintArea()
{
    cout << this->Area() << '\n';  // 'this' is the actual object. Area() is virtual, so the DERIVED version runs.
}                                   // (the handout wrote this->area() with a lowercase a, which would not compile)
