#include<iostream>
using namespace std;
int main()
{
	int x,sum,nr=0;
	bool ok=true;
	while(ok)
	{
		sum=0;
		cout<<"Enter a number:";
		cin>>x;
		for(int i=1; i<=x/2;i++)
		  if(x%i==0)  sum+=i;
	    if(sum==x)
		     {
		      cout<<"it is tom"<<endl;
		      ok=false;
		     }
	    else
		    nr+=1;
	}
	cout<<"nr. of other number:"<<nr;
	return 0;
}
