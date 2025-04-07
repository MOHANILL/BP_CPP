#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	for(int i=1;i<=n;i++)
	   {
	   	for(int j=1;j<=(n-i);j++)
	   	cout<<"  ";
	   	for(int d=i;d<=(2*i-1);d++)
	   	cout<<" "<<d;
	   	for(int z=2*(i-1);z>=i;z--)
	   	cout<<" "<<z;
		cout<<endl;
  	   }
  	return 0;
}
