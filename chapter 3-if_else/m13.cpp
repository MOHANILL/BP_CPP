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
 	  	case 2:day=(m-1)*31+d;break;          //albeate mishe maho hesab nakard va dar ghaleb adad jam kard
 	  	case 3:day=(m-2)*30+d+31;break;
 	  	case 4:day=(m-3)*31+d+61;break; 
 	  	case 5:day=(m-4)*30+d+92;break;
 	  	case 6:day=(m-5)*31+d+122;break;  
 	  	case 7:day=(m-6)*30+d+153;break;
 	  	case 8:day=(m-7)*31+d+183;break;
 	  	case 9:day=(m-8)*30+d+214;break;
 	  	case 10:day=(m-9)*31+d+244;break;
 	  	case 11:day=(m-10)*30+d+275;break;
 	  	case 12:day=(m-11)*31+d+305;break;
 	  default:
 	  	   cout<<"Error";
	  }
	  cout<<"Day count:"<<day;
  return 0;
}
