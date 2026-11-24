// Rectangle.h : Declaration of the Rectangle class
#pragma once

class Rectangle {
private:
    float mLength;
    float mWidth;

public:
    // Constructors and destructor
    Rectangle();
    Rectangle(float length, float width);
    ~Rectangle();

    // Setter methods
    void SetLength(float length);
    void SetWidth(float width);

    // Getter methods
    float GetLength() const;
    float GetWidth() const;

    // Calculate area
    float GetArea() const;
};
