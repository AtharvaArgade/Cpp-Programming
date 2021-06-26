#include<iostream>
using namespace std;


class Demo
{
public:
  int i;
  int j;
  const int k;

  Demo(int no1, int no2, int no3) : i(no1),j(no2),k(no3)          // Base member initalisation
  {
    cout<<"Constructor called"<<endl;
  }

 /*  Demo(int no1, int no2, int no3) : i(no1),j(no2),k(51)          // We can also do it in this way
  {
    cout<<"Constructor called"<<endl;
  }*/

};

int main()
{
  Demo obj(10,20,30);
  cout<<obj.i<<"\n";
  cout<<obj.j<<"\n";
  cout<<obj.k<<"\n";

  return 0;
}