// main.cpp : PrintArea() lives in the abstract base class but still prints the right area
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {

    Rectangle rect;
    Triangle trgl;
    Polygon * pPoly1 = &rect;
    Polygon * pPoly2 = &trgl;

    pPoly1->SetValues(4,5);
    pPoly2->SetValues(4,5);

    pPoly1->PrintArea();           // 20
    pPoly2->PrintArea();           // 10

    return 0;
}
