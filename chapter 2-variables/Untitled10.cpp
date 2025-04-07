#include<iostream>
using namespace std;
int main()
{
	float m,b,s,t;
	cout<<"Enter salary:";
	cin>>s;
	m=s*20/100;
	b=s*10/100;
	t=s-(m+b);
	cout<<"Final salary:"<<t<<"$";
	return 0;
}
