#include<iostream>
using namespace std;
int main()
{
	int s;
	for(int i=2;i<=9;i+=2)
	  for(int k=1;k<=9;k++)
	  {
	  	s=i*10001+k*1010+k*100;
	  cout<<s<<endl;
	  }
	return 0;
}
