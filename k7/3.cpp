#include<iostream>
using namespace std;
float sum(float *p[],int n)
{
	float p=0;
	for(int i=0;i<n;i++)
	p=p+(*p[i]);
	return p;
}
