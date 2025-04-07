#include<iostream>
#include<math.h>
using namespace std;
long fact(int);
int main()
{
	int a=1, i=0;
	float sum=0, r, eps, x, z, pi=3.14159265;
	cout<<"Enter angle:";
	cin>>z;
	x=z*pi/180;
	cout<<"Enter nicety(eps):";
	cin>>eps;
	r=1;
	while(r>eps)
	   {
		sum+=(r*a);
		i+=2;
		r=pow(x,i)/fact(i);
		a=-a;
  	   }
  	cout<<"cos("<<z<<")="<<sum<<"\n";
  	cout<<cos(x);
  	return 0;
}
long fact(int n)
  {
  	int sum=1;
  	for(int i=2;i<=n;i++)
  	sum*=i;
  	return sum;
  }
