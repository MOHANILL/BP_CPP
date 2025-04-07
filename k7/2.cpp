#include<iostream>
using namespace std;
void pa (float *a[],int n,float b[])
{
	for(int i=0; i<n;i++)
	   b[i]=*a[i];
}
