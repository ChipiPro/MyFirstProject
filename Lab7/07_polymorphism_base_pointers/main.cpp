// main.cpp : a pointer to the BASE class can point at a DERIVED object
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {
    Rectangle rect;
    Triangle trgl;
    Polygon* pPoly1 = &rect;       // allowed: a Rectangle IS-A Polygon
    Polygon* pPoly2 = &trgl;
    pPoly1->SetValues(4,5);        // pointer to Polygon can only reach Polygon's members
    pPoly2->SetValues(4,5);

    // pPoly1->Area() would NOT compile here: Polygon has no Area(). So we use the objects directly.
    cout << rect.Area() << '\n';   // 20
    cout << trgl.Area() << '\n';   // 10
    return 0;
}
