#include<iostream>
using namespace std;
int main()
{
	float x,s,t,r;
	cout<<"Enter x by number:";
	cin>>x;
	if(x>0)
	 {s=x*x;
	   cout<<"Y="<<s;
	 }
	else if(x<0)
	       {t=2*x;
              cout<<"Y="<<t;
	       }
	else      if(x==0)           //in khat ro mitoonim nnvisim va be jaye dige erja bedim
	             cout<<"Y="<<0;
	
	return 0;
	 
}
