// Rectangle.h : Derived class implementing Polygon's pure virtual Area function
#pragma once

#include "Polygon.h"

class Rectangle : public Polygon {
  public:
    // Override the pure virtual Area function from Polygon
    int Area() override;
};
