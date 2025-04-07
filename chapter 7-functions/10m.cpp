#include<iostream>
using namespace std;
long aval(long n)
{
	bool ok=false;
	do
	{
	 n--;
	 int i=2;
	 while(n%i !=0 && i<=n/2)
	 i++;
	 if(n%i!=0)
	  ok=true;	
	
	}
	while(ok==false);
	return n;
}
int main()
{
	int nr=0;
	long data[100000],d;
	for(long i=100; i<=100000000; i*=10)
	{
		d=aval(i);
		cout<<d;
		data[nr++]=d;
		
	}
	return 0;
}

