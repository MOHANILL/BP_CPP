#include<iostream>
using namespace std;
int main()
{
	int x,t,s,p;
	for(int n=100; n<=999;n++)
	 {
	   x=n%100;
	   t=x/10;
	  	
	  	 s=n/100;
	  	 p=n%10;
	  	 if(s==p) 
		   if(t>5)
	  	 cout<<n<<endl;
	 }
  return 0;
}
