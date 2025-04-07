#include<iostream>
using namespace std;
int main()
{
	int x,sum=0,n,j;
	cout<<"Enter number:";
	cin>>n; 
	j=0;                  
    while(j!=1)        
       {
       	  i=n;
       	  x=2;
       	  while(i%x!=0 && x<=i/2)  
          x++;
       	 if(i%x!=0)
       	    {
       	  	   cout<<i<<endl;
       	  	   j++;
       	    }
       	else
       	      n--;
       }
       
   return 0;
}
