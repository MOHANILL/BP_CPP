#include<iostream>
using namespace std;
int main()
{
	int x,z,y,sum=0;
	for(int i=1;i<=20;i++)
	   {
	   	cout<<"Enter a number:";
	   	cin>>x;            //             ex:789
	   	y=x;              //show line 17
	   	while(x!=0)
	   	     {
	   	     	z=x%10;  //          first:      second:     third:
	   	     	sum+=z;  //          first:      second:     third:
	   	     	x/=10;   //          first:       second:     
	   	     }
	   	     cout<<"sum digits of"<<y<<"="<<sum<<endl;
	   }
	return 0;
}
