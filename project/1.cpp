#include<iostream>
using namespace std;
void ABC(int x, int& sum,int& nr, int& in)
{
	int s,p;
	nr=0;
	sum=0;
	in=0;
	p=x;
	do
	  {
	  	 s=x%10;
	  	 in=in*10+s;
	      x/=10;
	      sum+=s;
		 nr++;
	  }while(p!=0);
	     
 return; 
}
bool test(int x, int y)
{
	int help,c;
	  c=x%y;
	  if(c==0)
	    return true;
	  else
	    return false;
	 
}
int main()
{
	bool T;
	int m,x,sum,nr,c,j=-1;
	cout<<"Enter nr. of yours:";
	cin>>m;
	int d[m];
	for(int i=0;i<m;i++)
	  {
	   x=0;
	   cin>>x;
	   ABC(x,sum,nr,c);
	   T=test(sum,nr);
	   if(T==true && c>x)
	   d[++j]=x;
      }
   for(int w=0;w<=j;w++)
    cout<<d[w]<<"\t";
  return 0;
}
