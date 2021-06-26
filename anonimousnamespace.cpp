#include<iostream>

using namespace std;  

namespace    // Unnamed namespace / Anonymous namespace
{
  class Demo
  {
    public:
    void fun() { cout<<"Inside fun\n"; }
  };
}

int main()
{
  Demo obj;
  obj.fun();
  return 0;
}