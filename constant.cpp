#include<iostream>
using namespace std;

class Demo
{
public:
  int i;
  int j;
  const int k=30;      // constant characteristics

  Demo()
  {
    int i=10;
    int j=20;
//  int k=30;   //  Error
  }

  void fun()    // Non constant behaviour
  {
    i++;
    j++;
 // k++;       //  Not allowed as k is constant.
  }

  void gun()    // constant behaviour
  {
     // i++;     // We can not change the characteristics inside constant function
     // j++;     // We can not change the characteristics inside constant function
     // k++;     // Not allowed as k is constant   
  }
};

int main()
{
  Demo obj;           // Non constant obje t
  cout<<obj.k<<endl;
  // obj.k++;   // Not Allowed 
  obj1.fun();   // Non constant object can call non constant function
  obj1.gun();   // Non constant object can call constant function

  const Demo obj2;    // Constant object
  // obj2.i++;    // Not allowed
  // obj2.j++;    // Not allowed
  // obj2.k++;    // Not allowed
  obj2.fun();         // Constant object can not call non constant function
  obj2.gun();         // constnt object can call constant function
/*
  const int i;  // Error
  const int i=11;  // Allowed
*/
  
return 0;
}