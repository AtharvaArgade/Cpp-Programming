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

  Arithematic(Arithematic &ref)
  {
    cout<<"Inside copy constructor\n";
    this->no1=ref.no1;
    this->no2=ref.no2;
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
  Arithematic obj1;
  Arithematic obj2(50, 40);
  Arithematic obj3(obj2); 
  
  cout<<obj2.no1<<"\t"<<obj2.no2<<endl;
  cout<<obj3.no1<<"\t"<<obj3.no2<<endl;

  return 0;            
}