#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	cout<<rand()%1000+1<<endl;
	return 0;
}
