#include<iostream>
using namespace std;
int main()
{
	int d,m,x,y;
	cout<<"Enter date without year: Month=";
	cin>>m;
	cout<<"day=";
	cin>>d;
	x=m*30;
	y=d+x;
	cout<<y<<"Days";
	return 0;
	
}
