// Triangle.h : Derived class inheriting publicly from Polygon
#pragma once

#include "Polygon.h"

class Triangle : public Polygon {
  public:
    // Calculate and return the area of the triangle
    int Area();
};
