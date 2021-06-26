#include<iostream>

using namespace std;

void FunValue(int no)
{
	cout<<"Inside call by value function\n";
	cout<<"Value of parameter is :"<<no<<"\n";  // 10
	no++;  // 11
	cout<<"Value after updation :"<<no<<"\n";  // 11
}

void FunAddress(int * p)
{
	cout<<"Inside call by address function\n";  
	cout<<"Value of parameter is :"<<*p<<"\n";  // 10
	(*p)++;  // 11
	cout<<"Value of updation is :"<<*p<<"\n";  // 11
}

void FunReference(int &ref)
{
	cout<<"Inside call by reference function\n";
	cout<<"Value of parameter is :"<<ref<<"\n"; //10
	ref++;  //11
	cout<<"Value after updation :"<<ref<<"\n";  // 11
}

int main()
{
	int i=10, j=10, k=10;
	cout<<"Value of i before call :"<<i<<"\n";  // 10
	FunValue(i);   // FunValue(10)
	cout<<"Value of i after call :"<<i<<"\n";  // 10

	cout<<"Value of j before call :"<<j<<"\n";   // 10
	FunAddress(&j);  // FunAddress(200)
	cout<<"Value of j after call :"<<j<<"\n";   // 11

	cout<<"Value of k before call :"<<k<<"\n";  // 10
	FunReference(k);   //FunReference(k)
	cout<<"Value of k after call :"<<k<<"\n";   // 11	
	
	return 0;
}
