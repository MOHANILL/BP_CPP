#include<iostream>
using namespace std;
void readmat (int a[], int n);
void printmat (int a[], int n);
void sortselect (int a[], int n);
void sortinverse (int a[], int n);
int main()
{
	const n=1000;
	int a[n];
	readmat(a,n);
	sortselect(a,n);
	printmat(a,n);
	for(int i=1;i<=10;i++)
	   {
	   	sortinverse(a,n);
	   	printmat(a,n);
	   }
	return 0;
}
void sortinverse (int a[], int n)
{
	int help;
	for(int i=0;i<n/2;i++)
	{
	help=a[i];
	a[i]=a[n-i-1];
	a[n-i-1]=help;
    }
  return;
}
