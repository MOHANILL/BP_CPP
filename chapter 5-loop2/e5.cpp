#include<iostream>
using namespace std;
int main()
{
	 int s;
	 cout<<"Enter positive number:";
	 cin>>s;
	 if(s>=40 && s<50)
	    {
	 	 cout<<"XL";
	 	 s-=40;
	    }
	 while(s>=10)
	    {  
	     cout<<"X";
	     s-=10;
	    }
	 if(s==9)
	   	{
		   cout<<"IX";
	       s-=9;
	   	}
	 if(s>=5 && s<=8)
	   {
	   	cout<<"V";
	   	s-=5;
	   }
	  if(s==4)
	   {
	   	cout<<"IV";
	   	s-=4;
	   }
	  while(s>=1 && s<=3)
	   {
	   	cout<<"I";
	   	s-=1;
	   }
	return 0;
}
