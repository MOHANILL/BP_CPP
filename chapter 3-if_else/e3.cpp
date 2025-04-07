#include<iostream>
using namespace std;
int main()
{
	int x,d,m;
	cin>>x;
	if(x%30==0)
	 {
	 	d=30;
	 	m=x/30;
	 }
	 else
        {
        d=x%30;
	    m=x/30+1;
	    }
	cout<<m<<"."<<d;
  return 0;
}
