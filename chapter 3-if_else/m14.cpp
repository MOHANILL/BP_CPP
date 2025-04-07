#include<iostream>
using namespace std;
int main()
{
	int day,d,m;
	cout<<"Enter month:";
	cin>>m;
	cout<<"Enter day:";
	cin>>d;
	switch(m)
 	  {
 	  	case 1:;
 	  	case 2:;
 	  	case 3:;
 	  	case 4:; 
 	  	case 5:;
 	  	case 6:;
 	  	case 7: day=(m-1)*30+d;break;
 	  	case 8:;
 	  	case 9:;
 	  	case 10:;
 	  	case 11:;
 	  	case 12:day=(m-7)*31+d+180;break;
 	  default:
 	  	   cout<<"Error";
	  }
	      switch(day&7)
             {
               case 1: cout<<"shanbe"; break;
               case 2: cout<<"yek shanbe"; break;
               case 3: cout<<"do shanbe"; break;
               case 4: cout<<"se shanbe"; break;
	           case 5: cout<<"chahar shanbe"; break;
	           case 6: cout<<"panj shanbe"; break;
           default: cout<<"jome"; 
	         } 	
	  
  return 0;	
}
