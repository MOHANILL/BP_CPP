#include<iostream>
using namespace std;
int main()
{
	int x,y,z,o,p,k;
	for(int i=1000;i<=9999;i++)
	  {
	  	x=i/1000;    //m
	  	y=i%10;     //m
	  	z=i%1000;
	  	o=z/100;  //m
	  	p=z%100; 
	  	k=p/10;   //m
	  	if(x==y)
	  	  if(o>3)
	  	   if(k>3)
	  	cout<<i<<endl;
	  }
  return 0;
}
