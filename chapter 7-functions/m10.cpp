#include<iostream>
using namespace std;
long aval(long n)
{
	bool ok=false;
	do
	{
		n--;
		int i=2;
		while(n%i!=0 && i<=n/2)
		i++;
		if(n%i!=0)
		ok=true;
	}while(ok==false);
	return n;
}
int main()
{
	int j=0;
	long d[7],k;
	for(long i=100;i<=10000000;i*=10)
	   {
		k=aval(i);
		cout<<k<<"\t";
		d[j++]=k;
	   }
  return 0;
}
