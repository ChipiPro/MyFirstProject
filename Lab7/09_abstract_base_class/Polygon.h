// Polygon.h : Abstract base class with a pure virtual Area function
#pragma once

class Polygon {
  protected:
    int mWidth;
    int mHeight;

  public:
    // Set width and height of the polygon
    void SetValues(int width, int height);

    // Pure virtual function making Polygon an abstract base class
    virtual int Area() = 0;
};
