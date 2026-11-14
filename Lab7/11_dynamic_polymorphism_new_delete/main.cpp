// main.cpp : objects created with new, used through base-class pointers, then deleted
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Polygon* pPoly1 = new Rectangle(4,5);   // pointer type is Polygon*, the real object is a Rectangle
    Polygon* pPoly2 = new Triangle(4,5);

    pPoly1->PrintArea();                    // 20   (the handout wrote Printarea, which would not compile)
    pPoly2->PrintArea();                    // 10

    delete pPoly1;                          // give the memory back
    delete pPoly2;                          // this is safe because Polygon has a virtual destructor

    return 0;
}
