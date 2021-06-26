using namespace std;    
#include<iostream>      

class Arithematic
{
  public:
    int no1;
    int no2;

  
  Arithematic()
  {
    cout<<"Inside Default Constructor\n";
    no1=0;
    no2=0;
  }

  Arithematic(int i, int j)
  {
    cout<<"Inside parameterised constructor\n";
    no1=i;
    no2=j;
  }

  Arithematic(Arithematic &obj)
  {
    cout<<"Inside copy constructor\n";
  }

  ~Arithematic()
  {
    cout<<"Inside Destructor\n";
  }

  int Add()
  {
    int result=0;
    result=no1+no2;
    return result;
  }
  
  int Sub()         // Behaviour of class
  {
    int result=0;
    result=no1-no2;
    return result;
  }
};

int main()             
{
  int x=0, y=0, ret=0;

  cout<<"Enter first nmber\n";
  cin>>x;
  cout<<"Enter second Number\n";
  cin>>y;

  Arithematic obj1(x,y);
  ret=obj1.Add();
  cout<<"Addition is : "<<ret<<"\n";
  ret=obj1.Sub();
  cout<<"Subtraction is : "<<ret<<"\n";
  
  Arithematic obj2;
  ret=obj2.Add();
  cout<<"Addition is : "<<ret<<"\n";
  ret=obj2.Sub();
  cout<<"Subtraction is : "<<ret<<"\n";
  return 0;            
}