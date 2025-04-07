#include<iostream>
using namespace std;
int main()
{
	int ph,m,e,s,p,z,u,avall,pall;
	for(int n=1;n<=30;n++)
	 {
	 
	cout<<"Enter Physics score:";
	cin>>ph;
	cout<<"Enter Mathematics score:";
	cin>>m;
	cout<<"Enter English score:";
	cin>>e;
	s=ph*2;
	u=m*3;
	z=u+s+e;
	p=z/6;
	avall+=p;
	cout<<"GPA studant"<<n<<"="<<p<<endl;
	if(n==30)
	  {
	 	pall=avall/30;
	    cout<<pall;
	   }
     }
     return 0;
}
