#include<iostream>
using namespace std;
void help(long n,long& f)
  {
  	f=1;
	for(int i=2;i<=n;i++)
	   f*=i;
	   return;
  }
long cnk(int n,int k)
{
	long f1,f2,f3;
	help(n,f1);
	help(k,f2);
	help((n-k),f3);
	return f1/(f2*f3);
}
int main()
{
	long p;
	for(int n=10;n<100;n++)
	{
		p=cnk(n,5);
	  cout<<p<<"\t";
    }
 return 0;
}
