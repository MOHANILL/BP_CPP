#include<iostream>
using namespace std;
int change(int d1,int m1)
{
	int dd;
	switch(m1)
	{
		case 1:
		case 2:
		case 3:dd=(m1-1)*30+d1;break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:dd=(m1-4)*31+d1+90;break;
	}

  return dd;
}
int main()
{
	int d,m,kk=0,nr=-1;
	do
	  {
	  	cout<<"month of bd:";
	    cin>>m;
	    cout<<"day of bd:";
	    cin>>d;
	    ++nr;
	    kk=change(d,m);
	    cout<<m<<"."<<d<<"="<<kk<<"\n";
	  }while((d!=0 && m!=0) && nr<=1000);
	return 0;
}

