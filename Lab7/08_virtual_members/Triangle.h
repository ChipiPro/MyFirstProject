// Triangle.h : Derived class inheriting publicly from Polygon
#pragma once

#include "Polygon.h"

class Triangle : public Polygon {
  public:
    // Override the virtual Area function from Polygon
    int Area() override;
};
