/* Write generic program to accept N values from user and return largest values. 
*/

#include<iostream>

using namespace std;

template<class T> 
T Max(T *arr, int iSize) 
{ 
	T Max =arr[0]; 
	int i = 0; 
 	
 	if((arr == NULL) || (iSize < 1))
 	{
 		return -1;
 	}

 	for(i = 0;i<iSize;i++) 
 	{ 
 		if(Max < arr[i])
 		{
 			Max = arr[i];
 		}
 	} 
 	return Max; 
}

int main() 
{ 
 	int arr[]={10, 20, 30, 40, 50}; 
 	float brr[] = {10.0,3.7,9.8,8.7}; 
 	int iRet = Max(arr,5); 
 	cout<<iRet<<endl; 
 	float fRet = Max(brr,4); 
 	cout<<fRet<<endl; 
 	return 0; 
} 

