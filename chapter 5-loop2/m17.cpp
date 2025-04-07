#include<iostream>
using namespace std;
int main()
{
	int x,n,j,i,non=0;
	j=0;
	 while(j!=1)        
       {
	   	cout<<"Enter a number:";   
	    cin>>n;
       	x=2;
       	while(n%x!=0 && x<=n/2)  
        x++;
       	if(n%x!=0)
       	    {
       	  	   cout<<"The prime number:"<<n<<endl;
       	  	   j++;
       	    }
       	else
       	      non+=1;
       }
       cout<<"The nr.of non-prime number:"<<non;
    return 0;
}
