#include<iostream>
using namespace std;
int main()
{
	int p=1,q=0;
	float n,sum=0,r,s;
	cout<<"Enter end line of process:";
	cin>>n;
	if(n<=0.25)
       {
       	do
	     {
	   	  q+=2;
	  	  s=q*q;
	  	  r=p/s;
	  	  sum+=r;
	     }
	  	while(n<r);
	  	cout<<"Sum="<<sum;
       }
    else
       cout<<"Error";
	return 0;
}
