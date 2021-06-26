/* Write generic program to accept N values and search first occurrence of any 
specific value. 
Input : 10 20 30 10 30 40 10 40 10 
Value to search : 40 
Output : 6 */

#include<iostream>
using namespace std;

template<class T> 
int SearchFirst(T *arr, int iSize, T iNo) 
{ 
	int i = 0;
 	for(i=0;i<iSize;i++)
 	{
 		if(arr[i] == iNo)
 		{
 			break;
 		}
 	}
 	if(i == iSize)
 	{
 		return -1;
 	}
 	else
 	{
 		return i+1;
 	}
} 
int main() 
{ 
 	float arr[]={10.3,20.5,30.7,10.3,30.2,40.6,10.8,40.0,10.4}; 
 	int iRet = SearchFirst(arr,9,40.6f); 
 	cout<<iRet<<endl; 
 	return 0; 
} 