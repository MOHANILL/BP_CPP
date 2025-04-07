#include<iostream>
using namespace std;
void abs (float *p[],int n)
{
	for(int i=0;i<n;i++)
	   if(*p[i]<0)
	      *p[i]=-(*p[i]);
}
