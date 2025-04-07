#include<iostream>
using namespace std;
int main()
{
	for(int i=2;i<=8;i+=2)
	  for(int j=0;j<=8;j+=2)
	    cout<<i*1000+j*100+j*10+i<<"\t";
	return 0;
}
