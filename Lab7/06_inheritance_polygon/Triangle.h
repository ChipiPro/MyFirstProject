// Triangle.h
#pragma once

#include "Polygon.h"

class Triangle : public Polygon {   // public inheritance: Triangle IS-A Polygon
  public:
    int Area();
};
