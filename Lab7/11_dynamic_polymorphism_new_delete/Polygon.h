// Polygon.h : the BASE class. Width and height are protected so derived classes can use them.
#pragma once

class Polygon {
  protected:                       // like private, BUT derived classes (Rectangle, Triangle) may access them
    int mWidth;                    // NOTE: the handout was missing the semicolon after mWidth
    int mHeight;
  public:
    void SetValues(int width, int height);
    virtual int Area() = 0;
    void PrintArea();
    virtual ~Polygon() {}          // virtual destructor: needed so delete through a Polygon* cleans up correctly
};
