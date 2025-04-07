#include<iostream>
using namespace std;
bool control(int,int,int,int);
int main()
{
	const int k=2;
	string fname, d[k];
	int m,y,j=-1;
	for(int i=1; i<=k;i++)
	{
		  cout<<"Your fname:";
		  cin>>fname;
		  cout<<"Birthday date(m,y):";
		  cin>>m>>y;
		  if(control(m,y,6,30))
		     d[++j]=fname;	
		    
	}
	for(int s=0;s<k;s++) //Ezafe 
	cout<<d[s];
	
	return 0;
}
