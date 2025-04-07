#include<iostream>
using namespace std;
int main()
{
	int x,y,z,s;
	cout<<"Enter first score:";
	cin>>x;
	cout<<"Enter second score:";
	cin>>y;
	cout<<"Enter third score:";
	cin>>z;
	s=(x+y+z)/3;
	cout<<"Your GPA:"<<s;
	return 0;
}
