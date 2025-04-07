#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i=1;
	bool b;
	do 
	{
		cout<<  pow (i,2);
		b=(i>=10)||(i==i);
		i=i+1;
	} while(!b);
  return 0;
}
