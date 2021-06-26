#include<iostream>
using namespace std;


class Demo
{
public:
  int i;
  int j;
  const int k;

  Demo(int no) : j(++no),k(++no),i(++no)
  {
    cout<<"Constructor\n";
  }
};

int main()
{
  Demo obj(10);

  cout<<obj.i<<"\n";
  cout<<obj.j<<"\n";
  cout<<obj.k<<"\n";

  return 0;
}