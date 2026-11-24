// Rectangle.cpp : Implementation of the Rectangle class
#include "Rectangle.h"

// Default constructor initializes dimensions to zero
Rectangle::Rectangle() {
    mLength = 0.0f;
    mWidth = 0.0f;
}

// Overloaded constructor initializes dimensions with provided values
Rectangle::Rectangle(float length, float width) {
    mLength = length;
    mWidth = width;
}

// Destructor
Rectangle::~Rectangle() {
}

// Setter methods
void Rectangle::SetLength(float length) { mLength = length; }
void Rectangle::SetWidth(float width)   { mWidth = width; }

// Getter methods
float Rectangle::GetLength() const { return mLength; }
float Rectangle::GetWidth() const  { return mWidth; }

// Calculate and return the area of the rectangle
float Rectangle::GetArea() const {
    return mLength * mWidth;
}
