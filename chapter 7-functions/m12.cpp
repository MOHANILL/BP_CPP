#include<iostream>
using namespace std;
void remove(int a[],int& n,int x)
{
	int i=0;
	while(i<n)
	{
		while(a[i]!=x && i<n-1)
		i++;
		if(a[i]==x)
		  for(int j=i;j<n;j++)
		      a[j]=a[j+1];
	     n--;
	}
}
int main()
{
	int nr=100;
	int a[nr];
	for(int i=0;i<nr;i++)
	    cin>>a[i];
	remove(a,nr,5);
	for(int i=0;i<nr;i++)
	    cout<<a[i];
	return 0;
}
