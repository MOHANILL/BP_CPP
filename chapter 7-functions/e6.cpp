#include<iostream>
using namespace std;
int main()
{
	int m1,m2,y1,y2;
	cout<<"Enter year of your birthday:";
	cin>>y1;
	cout<<"Enter month of your birthday:";
	cin>>m1;
	if(control(m1,y1,7,81))
	   cout<<"18 or more";
	 else
	   cout<<"less than 18";
	return 0;
}

