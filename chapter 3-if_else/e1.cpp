#include<iostream>
using namespace std;
int main()
{
	float ho,hb,hm;
	cout<<"Enter your salary:";
	cin>>ho;
	if(ho>100000)
	 {
	  hm=ho-(ho*3/100);
	  hb=hm-(ho*7/100);
     }
   else
      hb=ho-(ho*7/100);
    cout<<"Remain of salary:"<<hb;
 return 0;
}
