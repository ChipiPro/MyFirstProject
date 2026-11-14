// Circle.h
#pragma once

namespace shapes {
    class Circle {
    private:
        float mRadius;
    public:
        Circle();
        Circle(float radius);
        ~Circle();
        void SetRadius(float radius);
        float GetRadius() const;
    };
}
