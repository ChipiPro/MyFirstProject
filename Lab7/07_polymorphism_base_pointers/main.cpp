// main.cpp : Using base class pointers to access derived objects
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {
    Rectangle rect;
    Triangle trgl;

    // Base class pointers pointing to derived objects
    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;

    // Set dimensions through base class pointers
    pPoly1->SetValues(4,5);
    pPoly2->SetValues(4,5);

    // Call Area() directly on the derived objects
    cout << rect.Area() << '\n';
    cout << trgl.Area() << '\n';

    return 0;
}
