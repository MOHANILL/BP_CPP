#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	 long int x,y;
	
	do 
	  {
	  	cout<<"enter 8 digits number:"<<endl;
	    cin>>x;
	    if(x%100==43)
	      {
	  	    x=x-43+34;
	  	    x=pow(10,8)*2+x;
	  	    cout<<x<<endl;
	  	    
	      }
	    else
	    {
	    x=pow(10,8)*2+x;
	    cout<<x<<endl;
	    }
	  }
	  while(x!=0);
	return 0;
}
