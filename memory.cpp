#include<iostream>
using namespace std;

int main()
{
  int *p=NULL;

  p=new int[5];   // p=(int*)malloc(sizeof(int)*5);
 
  delete []p;      // free(p);

  // q=(int *)malloc(sizeof(int)*1);
  q=new int;
  delete q;

  // r=(int *)malloc(sizeof(int) * 1);
  // *r=11;
  r=new int(11);
  delete r;

  return 0;
}