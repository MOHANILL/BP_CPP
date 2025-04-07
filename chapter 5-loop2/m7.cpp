#include<iostream>
using namespace std;
int main()
{
	int n,m,mm,d,in;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>m;
		mm=m;
		in=0;
		while(m!=0)
		{
		  d=m%10;
		  in=in*10+d;
		  m/=10;
		}
		cout<<"maghloobe"<<mm<<"="<<in;
	}
	return 0;
}
