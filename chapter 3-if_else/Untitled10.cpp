#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter your age:";
	cin>>x;
	if(x<18)
	   cout<<"you are a child";
	   else
	   {if(65>x&&x>18)
	       cout<<"You are an adult";
	      else
	         {if(x>65)
	             cout<<"You are a cenior citizen"
	   ;}
	   }
	  
	   return 0;
}
