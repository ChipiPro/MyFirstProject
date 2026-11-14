// Base.h
#pragma once

class Base {
  public:
    virtual ~Base();               // virtual destructor, so deleting through a Base* is safe
  private:
    virtual void DummyFunction();  // at least one virtual function makes Base "polymorphic",
};                                 // which dynamic_cast needs
