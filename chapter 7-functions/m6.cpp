#include<iostream>
using namespace std;
bool control(int m1,int y1,int m2,int y2);
int main()
{
	int m,y;
	bool s;
	cout<<"Enter your BD(y/m):";
	cin>>y>>m;
	s=control(m,y,7,81);
	cout<<s;
  return 0;
}
