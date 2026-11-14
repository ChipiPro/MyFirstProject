// main.cpp : static_cast does NO run-time check, so the programmer must be sure the cast is safe
#include <iostream>
#include "Derived.h"

using namespace std;

int main ()
{
   Base* pBase = new Base();       // the real object is only a Base

   // Compiles fine, but pDerived points at an object that is NOT a full Derived.
   // That is dangerous if you USE pDerived (for example to read 'a'), so here we never use it.
   Derived* pDerived = static_cast<Derived*>(pBase);
   (void)pDerived;                 // tells the compiler "I know it is unused"

   cout << "static_cast compiled and ran. It did not warn us the cast was unsafe." << endl;

   delete pBase;
   pBase = nullptr;

   return 0;
}
