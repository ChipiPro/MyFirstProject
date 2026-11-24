// main.cpp : Polymorphism using virtual member functions
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon poly;

    // Base class pointers referencing derived and base objects
    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;
    Polygon* pPoly3 = &poly;

    // Set dimensions for each object
    pPoly1->SetValues(4,5);
    pPoly2->SetValues(4,5);
    pPoly3->SetValues(4,5);

    // Virtual Area() resolves to each object's actual type at runtime
    cout << pPoly1->Area() << '\n';
    cout << pPoly2->Area() << '\n';
    cout << pPoly3->Area() << '\n';

    return 0;
}
