#include<iostream>
using namespace std;
int main()
{
	int q,p;
	float sum,r,n;  //chera p q bayad dar float bashand?
	cout<<"Enter n:";
	cin>>n;
	p=1;
	q=2;
	r=p/q;
	sum=0;
     while (n>sum)
	    {
	 	  p+=1;
	  	  q+=1;
	 	  r=p/q;
		  sum+=r;
		  cout<<"Sum="<<sum;		
	    }
	 
  return 0;
}
