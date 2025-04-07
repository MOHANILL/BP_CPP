#include<iostream>
using namespace std;
int main()
{
	int nr=0;
	for(int i=0;i<=10;i++)
	  for(int j=10;j>=0;j--)
	    for(int k=-2;k<=2;k++)
	       if(i==j && j==k)
	         nr+=1;
	         
	         
	         
	         cout<<"nrrrr="<<nr;
	return 0;
}
