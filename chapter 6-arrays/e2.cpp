#include<iostream>
using namespace std;
int main()
{
	const int m=50;
	int i=-1,nrz,nrf,d[m], a[m], c[m];
	do
	{
		cout<<"Enter number:";
		cin>>d[++i];
	}
	while(i<m-1);
	for(i=0; i<50;i++)
	  
	   if(d[i]%2==0)
	       {
	        nrz+=1;
	        a[i]=d[i];
	       }
	   else
	       {
	        nrf+=1;
	        c[i]=d[i];
	       }
	cout<<"Even numbers:";
	 for(i=0;i<50;i++)
	  cout<<a[i]<<"  .";
	  cout<<"Number of even number:"<<nrz<<"      ";
	  cout<<"Odd numbers:";
	 for(i=0;i<50;i++)
	  cout<<c[i]<<"  .";
	  cout<<"Number of odd number:"<<nrf;
     
	return 0;
}
	   
