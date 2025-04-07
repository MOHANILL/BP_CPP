#include<iostream>
using namespace std;
int main()
{
	int x,a,b,sum1,sum2,sum3;
	cin>>x;
	a=x%10; b=x/10%10;
	sum1=a+b;
	sum2=a*10+b;
	sum3=b*10+a;
	cout<<sum1<<','<<sum2<<','<<sum3;
return 0;
}
