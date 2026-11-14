// main.cpp : virtual functions. The call goes to the real object's version, not the pointer's type.
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon poly;                  // allowed here because Polygon is not abstract yet
    Polygon* pPoly1 = &rect;
    Polygon* pPoly2 = &trgl;
    Polygon* pPoly3 = &poly;
    pPoly1->SetValues(4,5);
    pPoly2->SetValues(4,5);
    pPoly3->SetValues(4,5);
    cout << pPoly1->Area() << '\n';   // 20 (Rectangle's Area)
    cout << pPoly2->Area() << '\n';   // 10 (Triangle's Area)
    cout << pPoly3->Area() << '\n';   // 0  (Polygon's own Area)
    // Try removing the word 'virtual' in Polygon.h: all three lines would print 0.
    return 0;
}
