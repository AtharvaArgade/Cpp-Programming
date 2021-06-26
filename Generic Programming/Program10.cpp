/*Write generic program to accept N values and reverse the contents. 
Input : 10 20 30 10 30 40 10 40 10 
Output : 10 40 10 40 30 10 30 20 10 
*/

#include<iostream>
using namespace std;

template<class T> 
void Reverse(T *arr, int iSize) 
{ 
 	T *start = arr, *end = arr;
 	T temp;
 	for(int i=0;i<iSize-1;i++)
 	{
 		end++;
 	}

 	while(start<end)
 	{
 		temp = *start;
 		*start = *end;
 		*end = temp;
 		start++;
 		end--;
 	}
} 

int main() 
{ 
 	int arr[]={10,20,30,10,30,40,10,40,10}; 
 	for(int i=0;i<9;i++) 
 	{ 
 		cout<<arr[i]<<"\t";  
 	} 
 	Reverse(arr,9); 
 	cout<<endl;
 	for(int i=0;i<9;i++) 
 	{ 
 		cout<<arr[i]<<"\t"; 
 	} 
 	return 0; 
}

