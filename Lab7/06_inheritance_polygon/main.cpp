// main.cpp : basic inheritance. Rectangle and Triangle both inherit SetValues from Polygon.
#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {
    Rectangle rect;
    Triangle trgl;
    rect.SetValues(4,5);           // SetValues is NOT written in Rectangle: it is inherited from Polygon
    trgl.SetValues(4,5);
    cout << rect.Area() << '\n';   // 4 x 5 = 20
    cout << trgl.Area() << '\n';   // 4 x 5 / 2 = 10
    return 0;
}
