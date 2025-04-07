#include<iostream>
using namespace std;
int main()
{
	int x,y,d,m;
	cout<<"Enter month:";
	cin>>m;
	cout<<"Enter day:";
	cin>>d;
	if(m<7)
	 	x=(m-1)*31+d;
	 
	else 	
        x=(m-7)*30+186+d;
    
    switch(x&7)
    {
     case 1: cout<<"jome"; break;
     case 2: cout<<"shanbe"; break;
     case 3: cout<<"yek shanbe"; break;
     case 4: cout<<"do shanbe"; break;
	 case 5: cout<<"se shanbe"; break;
	 case 6: cout<<"chahar shanbe"; break;
 default: cout<<"panj shanbe"; 
	 	
	 } 	
    return 0;
}
