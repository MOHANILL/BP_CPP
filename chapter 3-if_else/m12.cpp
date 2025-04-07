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
 	  	case 4: day=(m-1)*31+d;break;
 	  	case 5:;
 	  	case 6:;
 	  	case 7: day=(m-4)*30+d+93;break;
 	  	case 8:;
 	  	case 9:;
 	  	case 10:day=(m-7)*31+d+183;break;
 	  	case 11:;
 	  	case 12:day=(m-10)*30+d+276;break;
 	  default:
 	  	   cout<<"Error";
	  }
	  cout<<"Day count:"<<day;
  return 0;	
}
