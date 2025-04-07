#include<iostream>
using namespace std;
int test(int x,int y)
{
	return(x+y);
}
int main()
{
	int y=0;
	for(int x=1;x<=3;x++)
	{
		y+=test(x,x+3);
		cout<<y<<' ';
	}
 return 0;
}
