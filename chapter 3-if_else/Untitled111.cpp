#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int day, month, x, y,m,d;
	cout<<"Enter number of days=";
	cin>>x; 
	if(x>186)
	 {
	 	y=x-186;
	 	month=y/30+7;
	 	day=y%30;
	 	   if(day==0)
	 	   {
	 	   	  month-=1;
	 	   	  day=30;
	 	   }
	 	cout<<month<<"/"<<day;	
	 }
	 else
	    {
	    	m=x/30;
	    	d=x%31;
	    	if (d==0)
	    	   {
	    	   	m-=1;
	    	   	d=31;
	    	   }
	    cout<<m<<"/"<<d;
	    }
	
	getch();
	}
	 
