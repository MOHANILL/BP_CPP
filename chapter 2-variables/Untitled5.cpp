#include<iostream>
using namespace std;
int main()
{
	float hour, min;
	int x;
	cout<<"enter time by minute:";
	cin>>x;
	hour=x/60;
	min=x%60;
	cout<<x<<"Minute="<<hour<<"Hour, "<<min<<"Min";
	return 0;
}
