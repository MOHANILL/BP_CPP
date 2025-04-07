#include<iostream>
using namespace std;
int main()
{
	int x,y,c,a,z;
	cout<<"Enter three digit number:";
	cin>>x;
	y=x/100;   //hundreds
	z=x%10;   //ones
	c=x%100;
	a=c/10;   //tens
	cout<<z<<a<<y;
	return 0;
}
