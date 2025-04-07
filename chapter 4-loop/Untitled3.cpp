#include<iostream>
using namespace std;  //x-(x^2/2!)+(x^3/3!)....
int main()
{
	int n,a=1;
	float x,sum,r,p,q=1;
	cout<<"Enter number of sentences:";
	cin>>n;
	cout<<"x:";
	cin>>x;
	p=x;
	sum=x;
	for(int i=2;i<=n;i++)
	   {
	 	p*=x;   //x^2  x^3
	 	q*=i;   //2!    3!
	 	r=p/q;
	 	a=-a;  //-   +
	 	sum+=r*a;
	   }
	   cout<<"sum="<<sum;
	   return 0;
}
