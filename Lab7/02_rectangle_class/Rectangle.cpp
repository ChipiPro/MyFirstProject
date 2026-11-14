// Rectangle.cpp : the IMPLEMENTATION (the real code) of the Rectangle class
#include "Rectangle.h"             // so the compiler knows what the class looks like

Rectangle::Rectangle() {           // Rectangle:: tells C++ "this function belongs to Rectangle"
    mLength = 0.0f;                // default constructor: both start at zero
    mWidth = 0.0f;
}

Rectangle::Rectangle(float length, float width) {
    mLength = length;              // overloaded constructor: use the values we were given
    mWidth = width;
}

Rectangle::~Rectangle() {
    // nothing to clean up yet
}

void Rectangle::SetLength(float length) { mLength = length; }
void Rectangle::SetWidth(float width)   { mWidth = width; }

float Rectangle::GetLength() const { return mLength; }
float Rectangle::GetWidth() const  { return mWidth; }

float Rectangle::GetArea() const {
    return mLength * mWidth;       // area of a rectangle
}
