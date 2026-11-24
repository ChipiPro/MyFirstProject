// Square.h : Declaration of the Square class inside the shapes namespace
#pragma once

namespace shapes {
    class Square {
    private:
        float mSideLength;

    public:
        // Constructors and destructor
        Square();
        Square(float sideLength);
        ~Square();

        // Setter and getter methods
        void SetSideLength(float sideLength);
        float GetSideLength() const;
    };
}
