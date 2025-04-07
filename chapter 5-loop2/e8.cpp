#include<iostream>
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
	  	    cout<<x<<endl;
	      }
	    else
	    cout<<x<<endl;	
	  }
	  while(x!=0);
	return 0;
}
