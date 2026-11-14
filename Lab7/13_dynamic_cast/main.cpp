// main.cpp : dynamic_cast is SAFE: it checks at run time and returns nullptr if the cast is not valid
#include <iostream>
#include "Derived.h"

using namespace std;

int main ()
{
   Base* pba = new Derived();      // base pointer, but the REAL object is a Derived
   Base* pbb = new Base();         // base pointer, and the real object is just a Base
   Derived * pd;

   pd = dynamic_cast<Derived*>(pba);          // valid: pba really points at a Derived
   if (pd == nullptr)
   {
     cout << "Null pointer on first type-cast.\n";
   }
   else
   {
     cout << "First type-cast succeeded.\n";  // added so you can SEE the success case
   }

   pd = dynamic_cast<Derived*>(pbb);          // invalid: pbb points at a plain Base, so the result is nullptr
   if (pd == nullptr)
   {
     cout << "Null pointer on second type-cast.\n";
   }

   delete pba;
   pba = nullptr;

   delete pbb;
   pbb = nullptr;

   return 0;
}
