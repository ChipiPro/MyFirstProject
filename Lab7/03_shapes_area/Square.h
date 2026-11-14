// Square.h
#pragma once

namespace shapes {                 // a namespace groups related names, so shapes::Square is its full name
    class Square {
    private:
        float mSideLength;
    public:
        Square();                          // default constructor
        Square(float sideLength);          // overloaded constructor
        ~Square();                         // destructor
        void SetSideLength(float sideLength);
        float GetSideLength() const;
    };
}
