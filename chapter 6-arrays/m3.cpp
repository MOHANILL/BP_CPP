#include<iostream>
using namespace std;
int main()
{
	const int m=100;
	float d[m],help;
	int i=-1,nr,index;
	do
	{
		cout<<"Enter number:";
		cin>>d[++i];
	}
	while(d[i]!=0 && i<m-1);
	if(d[i]==0)
	     nr=i;
	else
	     nr=i+1;
	for(int j=0; j<nr-1;j++)//
	  {
	   index=j;
	   for(i=j+1; i<nr; i++)
	     if(d[i]>d[index])
	        index=i;
	   help=d[j];
	   d[j]=d[index];
	   d[index]=help;
      } 
	 for(i=0; i<nr; i++)
	    cout<<d[i]<<"  ";
	return 0;     
}
