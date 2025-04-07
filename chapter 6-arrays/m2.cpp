#include<iostream>
using namespace std;
int main()
{
	const int i=100;
	float sum=0, av=0, min, max, d[i+6];
	int nmin=0, nmax=0, a=-1, nr;
	do
	{
		cout<<"Enter number:";
		cin>>d[++a];
	}
	while(d[a]!=0 && a<i-1);
	if(d[a]==0)               //tedad add
	      nr=a;
	else
	      nr=a+1;
	for( a=0; a<nr; a++)      //sum,av
	    sum+=d[a];
	av=sum/nr;
	min=d[0];                 //max,min
	max=d[0];
	for(a=1; a<nr; a++)
	    if(d[a]<min)
	       min=d[a];
   else if(d[a]>max)
           max=d[a];
    for(a=0; a<nr; a++)
       if(d[a]<av)
          nmin+=1;
  else if(d[a]>av)
          nmax+=1;
    d[nr]=sum;
    d[nr+1]=av;
    d[nr+2]=max;
    d[nr+3]=min;
    d[nr+4]=nmax;
    d[nr+5]=nmin;
    for(a=0; a<nr+6; a++)
       cout<<d[a]<<endl;
 return 0;
	
}
