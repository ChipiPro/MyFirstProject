// Daughter.cpp
#include "Daughter.h"
#include <iostream>
using namespace std;

// Nothing is said about Mother here, so C++ quietly calls Mother's DEFAULT constructor first.
Daughter::Daughter(int a)
{
  cout << "Daughter: int parameter\n\n";
}
