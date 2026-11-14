// Triangle.h
#pragma once

#include "Polygon.h"

class Triangle : public Polygon {   // public inheritance: Triangle IS-A Polygon
  public:
    int Area() override;       // override = I promise this replaces a virtual function of the base class
};
