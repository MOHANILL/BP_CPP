#include<iostream>
using namespace std;
bool okay(int,int,int,int,int,int)
int main()
{
	string name;
	int d,m,y,n,nr=0;
	cout<<"Enter number of people:";
	cin>>n;
	for(int i=1; i<=n;i++)
	{
		  cout<<"Your name:";
		  cin>>name;
		  cout<<"Birthday date(d,m,y):";
		  cin>>d>>m>>y;
		  if(okay(d,m,y,20,11,58))
		    {
		    	nr++;
		    	cout<<name;
		    }
	}
	cout<<"Nr.of old person="<<nr;
	return 0;
}
