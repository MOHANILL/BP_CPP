#include<iostream>
using namespace std;
int main()
{
	int x, y, min, hour, second;
	cout<<"Enter number time by second:";
	cin>>x;
	hour=x/3600;
	 y=x%3600;
	 min=y/60;
	 second=y%60;
    if(x>0)
	 cout<<hour<<"h., "<<min<<"min., "<<second<<"sec.";
	 else
	 cout<<"please try again with positive number.";

	 return 0;
	 
}
