#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number:";
	cin>>n;
	for(int i=1; i>=n; i++)
	   {
	   	 for(int j=i; j<=n-1; j++)
	   	     cout<<"  ";
	   	         for(int k=1; k<=2i-1; k++)
	   	              cout<<" "<<i;
	   	              cout<<endl;
	   }
	return 0;
}
