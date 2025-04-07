#include<iostream>
using namespace std;
int main()
{
	int ph,m,e,s,p,z,u;
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
	cout<<"GPA studant"<<n<<"="<<p<<endl;
	
     }
           for(int d=1;d<=30;d++)
           p+=p;
     return 0;
}
