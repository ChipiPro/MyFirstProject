// Triangle.h
#pragma once

namespace shapes {
    class Triangle {
    private:
        float mBase;
        float mHeight;
    public:
        Triangle();
        Triangle(float base, float height);
        ~Triangle();
        void SetBase(float base);
        void SetHeight(float height);
        float GetBase() const;
        float GetHeight() const;
    };
}
