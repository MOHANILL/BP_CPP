#include<iostream>
using namespace std;
int main()
{
	const int i=100;
	float sum=0, av=0, min, max, d[i];
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
    cout<<"Sum of datas="<<sum<<endl;
    cout<<"Average of datas="<<av<<endl;
    cout<<"Maximum data="<<max<<"  "<<"Minimum data="<<min<<endl;
    cout<<"Number of datas that more than average="<<nmax<<endl;
    cout<<"Number of datas that less than average="<<nmin<<endl;
 return 0;
	
}
