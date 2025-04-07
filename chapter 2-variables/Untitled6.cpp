#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x1, x2, y1, y2, m, s, n, d, p;
	cout<<"Enter two point(x,y):";
	cin>>x2>>y2>>x1>>x2;
	m=x2-x1;
	n=m*m;
	p=y2-y1;
	s=p*p;
	d=sqrt(s+n);
	cout<<d<<"vahed fasele";
	return 0;
	
}
