#include<iostream>
using namespace std;
int se (int a[],int n,int key)
{
	for(int i=0;i<n;i++)
	   if (a[i]==key)
	   return &a[i];
	return NULL;
}

