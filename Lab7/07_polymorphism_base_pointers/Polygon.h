// Polygon.h : Base class with protected dimensions for derived classes
#pragma once

class Polygon {
  protected:
    int mWidth;
    int mHeight;

  public:
    // Set width and height of the polygon
    void SetValues(int width, int height);
};
