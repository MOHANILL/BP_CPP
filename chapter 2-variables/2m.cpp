#include<iostream>
using namespace std;
int main()
{
	int x,y,hour,second,minute;
	cout<<"Enter time by second:";
	cin>>x;
	hour=x/3600;
	y=x%3600;
	minute=y/60;
	second=y%60;
	cout<<"(Hour:"<<hour<<", Minute:"<<minute<<", Second:"<<second<<")";
}
