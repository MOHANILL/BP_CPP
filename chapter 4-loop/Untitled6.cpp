#include<iostream>
using namespace std;
int main()
{
	int nr=0;
	for(int i=10;i<100;i++)
	{
		int sum=1;
		for(int j=2;j<=i/2;j++)
		   if(i%j==0) sum+=j;
		    if(sum==i) nr+=2;
	}
	cout<<nr;
	return 0;
}
