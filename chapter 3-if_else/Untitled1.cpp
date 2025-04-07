#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int day, month, x, y;
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
			
	 }
	 else
	    {
	    	month=x/30;
	    	day=x%31;
	    	if (day==0)
	    	   {
	    	   	month-=1;
	    	   	day=31;
	    	   }
	    }
	cout<<month<<"/"<<day;
	getch();
	}
	 
