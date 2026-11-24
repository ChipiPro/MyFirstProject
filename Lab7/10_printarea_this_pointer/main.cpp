// main.cpp : Calling PrintArea() through abstract base class pointers
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {
    Rectangle rect;
    Triangle trgl;

    // Pointers to the abstract base class Polygon
    Polygon * pPoly1 = &rect;
    Polygon * pPoly2 = &trgl;

    // Set dimensions through base class pointers
    pPoly1->SetValues(4,5);
    pPoly2->SetValues(4,5);

    // Call PrintArea() which invokes each derived class's Area()
    pPoly1->PrintArea();
    pPoly2->PrintArea();

    return 0;
}
