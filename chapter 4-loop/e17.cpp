#include<iostream>
using namespace std;
int main()
{
	int x,t,s,p,w;
	for(int n=100; n<=999;n++)
	 {
	   x=n%100;
	   t=x%10;
	   w=t%2;
	   s=n/100;
	   p=n%10;
	  	 if(s==p)
		    if(w==1)
	  	  cout<<n<<endl;
     }
    return 0;
}
