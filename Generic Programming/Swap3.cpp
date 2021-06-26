#include<iostream>
using namespace std;

// Specific function
void Swap(int &iNo1, int &iNo2)  
{
	int temp;
	temp = iNo1;
	iNo1 = iNo2;
	iNo2 = temp;
}

template <class T>
void SwapX(T &iNo1, T &iNo2)  
{
	T temp;
	temp = iNo1;
	iNo1 = iNo2;
	iNo2 = temp;
}

int main()
{
	char iValue1 , iValue2 ;
	cout<<"Enter first character\n";
	cin>>iValue1;
	cout<<"Enter second character\n";
	cin>>iValue2;

	SwapX(iValue1,iValue2);
	cout<<"After swap value1 is :"<<iValue1<<endl;
	cout<<"After swap value2 is :"<<iValue2<<endl;
	
	return 0;
}