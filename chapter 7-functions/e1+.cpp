#include<iostream>
using namespace std;
long tom(long);
int main()
{
	long int n;
	cout<<"Enter n:";
	cin>>n;
    cout<<tom (n);

  return 0;
}
long tom (long n)
{
	int sum;
	for(long i=2; i<n; i++)
	{
		sum=1;
		for(int x=2; x<=i/2; x++)
		{
			if(i%x==0)
			sum+=x;
			if (sum=i)
			return i;
		}
	}
}
