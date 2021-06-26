#include<iostream>

// Predefined namespace
using namespace std;     // It contains as cin and cout objects 

// Creating user defined namespaces 
namespace Marvellous
{
  class Demo
  {

  };
}

namespace Infosystems
{
  class Demo
  { 
    
  };
}

int main()
{
 // Demo obj;    // Not allowed

  using namespace Marvellous;    // 1st way
  Demo obj1;

//  using namespace Infosystems;    // Error
  Infosystems::Demo obj2;        // 2nd way

  return 0;
}