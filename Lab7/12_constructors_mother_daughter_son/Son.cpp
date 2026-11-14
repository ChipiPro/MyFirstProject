// Son.cpp
#include "Son.h"
#include <iostream>
using namespace std;

// ": Mother(a)" is the initialization list. It picks Mother's int constructor instead of the default one.
Son::Son(int a) : Mother(a)
{
   cout << "Son: int parameter\n\n";
}
