#include<iostream>
using namespace std;
int main()
{
	int x,n,z,i;
	cout<<"Enter number of prime number:";
	cin>>n;
	if(n==1)
	  cout<<2;
	else if(n>=2)
	       {
	       	cout<<2<<"  ";
	       	x=1;  
	       	z=3;
	       	while(x<n)
	       	   {
	       	   	i=2;
	       	   	while(z%i!=0 && i<=z/2)  
                i++;
       	        if(z%i!=0)
       	           {
       	           	cout<<z<<"  ";
       	           	x++;
       	           }
       	        z+=2;
       	        
	       	   }
	       }
  return 0;
}
