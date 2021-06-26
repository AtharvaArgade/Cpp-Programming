#include<iostream>
using namespace std;


void fun(int no)
{
  cout<<"Inside fun\n";
}

int main()
{
  int no=11;    // no is a variable of type integer initalised with the value 11.
  
  int &iref=no;   // iref is the reference of type integer which refers to no. 

// int &iref;       // Error
   
  cout<<no<<"\n";
  cout<<&no<<endl;
  cout<<sizeof(no)<<endl;
  cout<<sizeof(iref)<<endl;
  cout<<iref<<endl;
  cout<<&iref<<endl;

//-------------------------------------------------------------------------------------------------------------------------

  int i=21;
  
  int *p=&i;  // p is a pointer which holds address of integer currently it holds address of i.
  
  int *(&pref)=p;  // pref is the reference which referce to the pointer p.
  
  cout<<*pref<<endl;
  cout<<pref<<endl;
  cout<<&pref<<endl;
  cout<<sizeof(pref)<<endl;

//--------------------------------------------------------------------------------------------------------------------------

  void (&gun)(int)=fun;  // gun is the reference which referce to the function fun which accepts integer and returns nothing. 

  fun(11);
  gun(11);

  return 0;
}