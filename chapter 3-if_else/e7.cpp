#include<iostream>
using namespace std;
int main()
{
	int d,m,dd;
	cout<<"month";
	cin>>m;
	cout<<"day";
	cin>>d;
	switch(m)
	{
		case 1:
		case 2:
		case 3:dd=(m-1)*31+d;break;
		case 4:
		case 5:
		case 6:dd=(m-4)*30+d+93;break;
		case 7:
		case 8:
		case 9:dd=(m-7)*31+d+183;break;
		case 10:
		case 11:
		case 12:dd=(m-10)*30+d+276;break;
	  default:
	  	cout<<"Error";
	}
	cout<<dd;
  return 0;
}
