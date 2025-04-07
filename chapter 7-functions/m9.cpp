#include<iostream>
using namespace std;
int Tom(int i)
{
	int sum;

		sum=1;
		for(int x=2; x<=i/2; x++)
		{
			if(i%x==0)
			sum+=x;
			if (sum=i)
			return i;
		}
}
	
int main()
{
	for(int i=6; i<1000; i++)
	if(Tom(i))
	cout<<i<<"  ";
	return 0;
}

