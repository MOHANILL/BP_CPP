#include<iostream>
using namespace std;
long tom(int);
int main()
{
	long int k, n;
	cout<<"Enter n:";
	cin>>n;
    k=tom (n);
    cout<<k;

  return 0;
}
long int tom (long int n)
{
	int sum;
	for(long int i=2; i<n; i++)
	{
		sum=1;
		for(long int x=2; x<=i/2; x++)
		{
			if(i%x==0)
			sum+=x;
			if (sum=i)
			return i;
		}
	}
}
