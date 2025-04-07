#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int mm,dd,yy,t;
	cout<<"Enter year(2 digit):";
	cin>>yy;
	cout<<"Enter month:";
	cin>>mm;
	cout<<"Enter day:";
	cin>>dd;
	if(yy%4==0)
	  switch(mm)
	  {
 	  	case 1: t=trunc(30.42*(mm-1)+dd);break;
 	  	case 2:;
 	  	case 3:;
 	  	case 4:;
 	  	case 5:;
 	  	case 6:;
 	  	case 7:;
 	  	case 8:;
 	  	case 9:;
 	  	case 10:;
 	  	case 11:;
 	  	case 12:t=trunc(30.42*(mm-1)+dd)+1;break;
 	  default:
 	  	   cout<<"Error";
	  }
	else
	 switch(mm)
	  {
 	  	case 1:t=trunc(30.42*(mm-1)+dd);break;
 	  	case 2:t=trunc(30.42*(mm-1)+dd)+1;break;
 	  	case 3:;
 	  	case 4:;
 	  	case 5:;
 	  	case 6:;
 	  	case 7:t=trunc(30.42*(mm-1)+dd)-1;break;
 	  	case 8:;
 	  	case 9:;
 	  	case 10:;
 	  	case 11:;
 	  	case 12:t=trunc(30.42*(mm-1)+dd);break;
 	  default:
 	  	   cout<<"Error";
      }
       
    cout<<"Day count:"<<t;
 return 0;
}
