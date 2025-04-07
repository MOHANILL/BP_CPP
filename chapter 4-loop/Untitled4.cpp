#include<iostream>
using namespace std;
int main()
{
	int d,dd,mm;
	cout<<"Enter day by number:";
	cin>>d;
	mm=d/33+1;
	  if(mm<=11)
	  {
	     
    	dd=d%33;
	    if (dd==0)
	    	   {
	    	   	mm-=1;
	    	   	dd=33;
	    	   }
	   cout<<mm<<"/"<<dd;
       }
    else 
      cout<<"error";
	return 0;
}
