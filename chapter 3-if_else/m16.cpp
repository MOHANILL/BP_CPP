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
 	  	case 1:
 	  	case 2:day=31+d;break;          
 	  	case 3:day=59+d;break;
 	  	case 4:day=90+d;break; 
 	  	case 5:day=120+d;break;
 	  	case 6:day=151+d;break;  
 	  	case 7:day=181+d;break;
 	  	case 8:day=212+d;break;
 	  	case 9:day=243+d;break;
 	  	case 10:day=273+d;break;
 	  	case 11:day=304+d;break;
 	  	case 12:day=334+d;break;
 	  default:
 	  	   cout<<"Error";
	  }
	return 0;
}
