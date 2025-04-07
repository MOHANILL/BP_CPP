#include<iostream>  //soal
using namespace std;
int main()
{
	float ho,m,m1,m2,m3;
	cout<<"Enter your salary:";
	cin>>ho;
	if(ho<=150000)
	 cout<<"tax free :)";
	else if(ho>=150001 && ho<=230000)
	        m=(ho-150000)/10;
	else if(230001<=ho && ho<=280000)
	        m=(ho-230000)*12/100+8000;
	else if(280001<=ho && ho<=380000)
	        m=(ho-280000)*15/100+14000;
	else if(ho>380000)
	        m=(ho-380000)/5+29000;
	
	  cout<<"Totally tax~"<<m;
  return 0;        
}
