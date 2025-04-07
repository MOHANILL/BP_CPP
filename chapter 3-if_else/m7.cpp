#include<iostream>
using namespace std;
int main()
{
	int x,y,d,m;
	cout<<"Enter month:";
	cin>>m;
	cout<<"Enter day:";
	cin>>d;
	if(m<7)
	   {
	 	x=(m-1)*31+d;
	 	cout<<"Day count:"<<x;
	   }
	else
        	{
        	 y=(m-7)*30+186+d;
        	 cout<<"Day count:"<<y;
        	}
    return 0;
}
