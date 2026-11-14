// main.cpp : Polygon is now abstract, so Polygon poly; would NOT compile. Pointers to it are fine.
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {

    Rectangle rect;
    Triangle trgl;
    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;

    pPoly1->SetValues(4,5);
    pPoly2->SetValues(4,5);

    cout << rect.Area() << '\n';   // 20
    cout << trgl.Area() << '\n';   // 10

    return 0;
}
