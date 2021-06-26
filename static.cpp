using namespace std; 
#include<iostream>      

class Demo
{
  public:
    int i;             // non satic characteristics   (Instance Variable)
    int j;             // -----"------                (Instance Variable)
    static int k;      // static characteristics      (Class Variable)

  Demo()
  {
    i=10;
    j=20;
  }

  void fun()          // non static behaviour
  {
    cout<<"Inside Fun\n";
    cout<<i<<" "<<j<<"\n";     // allowed
    cout<<k<<"\n";             // allowed
  }
 
  static void gun()   // static behaviour
  {
    cout<<"Inside Gun\n";
 //   cout<<i<<" "<<j<<"\n";       // Not allowed
    cout<<k<<"\n";                 // allowed
  }
  
};

int Demo::k=30;

int main()
{
  Demo::gun();
  cout<<"Value of k is :"<<Demo::k<<"\n";

  Demo obj1;
  Demo obj2;

  cout<<"Size of object is : "<<sizeof(obj1)<<"\n";

  obj1.fun();
  obj1.gun();

  return 0;
}
