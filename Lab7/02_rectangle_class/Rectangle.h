// Rectangle.h : the DECLARATION (the "menu") of the Rectangle class
#pragma once                       // stops this header being included twice in one build

class Rectangle {
private:                           // private = only the class itself can touch these
    float mLength;                 // length of the rectangle
    float mWidth;                  // width of the rectangle

public:
    Rectangle();                               // default constructor: sets both values to 0 (Question 1)
    Rectangle(float length, float width);      // overloaded constructor: sets the values (Question 2)
    ~Rectangle();                              // destructor: does nothing for now

    void SetLength(float length);              // accessor methods to ASSIGN values
    void SetWidth(float width);

    float GetLength() const;                   // accessor methods to RETRIEVE values
    float GetWidth() const;                    // const = this function promises not to change the object

    float GetArea() const;                     // calculates length * width
};
