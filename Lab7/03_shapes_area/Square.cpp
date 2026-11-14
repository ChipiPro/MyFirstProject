// Square.cpp
#include "Square.h"

namespace shapes {
    Square::Square() { mSideLength = 0.0f; }
    Square::Square(float sideLength) { mSideLength = sideLength; }
    Square::~Square() { }
    void Square::SetSideLength(float sideLength) { mSideLength = sideLength; }
    float Square::GetSideLength() const { return mSideLength; }
}
