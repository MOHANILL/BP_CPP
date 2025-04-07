#include<iostream>
using namespace std;
int main()
{
	int s;
	for(int i=6;i<=9;i++)
	  for(int j=1;j<=9;j+=2)
	   for(int z=2;z<=9;z+=2)
	   {
	   s=i*100+j*10+z;
	   cout<<s<<endl;
	   }
	   return 0;
	 
}
