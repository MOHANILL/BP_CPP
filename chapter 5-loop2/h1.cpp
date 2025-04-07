#include<iostream>
using namespace std;
int main()
{
	int x,z1,z2,z3,nr=0,r;
	bool ok=true;
	while(ok)
	{
		cout<<"Enter first side of triangle:";
		cin>>z1;
		cout<<"Enter second side:";
		cin>>z2;
		cout<<"Enter third side:";
		cin>>z3;
		cout<<"Does it have right angle?(0,1):";
	    cin>>r;
		if(z1+z2>z3 && z2+z3>z1 && z3+z1>z2)
		    {
		    	 if(z1==z2 && z2==z3 && r==0)
     	            cout<<"This is Equilateral triangle"<<endl;
            else  
	             if((z1==z2 && z3!=z2)||(z2==z3 && z1!=z2)||(z3==z1 && z2!=z3))
	               if(r==1)
	                 cout<<"This is isosceles & right triangle"<<endl;
	        else 
	                 cout<<"This is isosceles triangle"<<endl;
	       
            else 
                if(r==1 && z1!=z2 && z1!=z3 && z2!=z3)
                     cout<<"This is right triangle"<<endl;
            else
		            cout<<"Not specific triangle"<<endl;
	          ok=false;
		    }
		else
		  nr+=1;
		    
	}
	cout<<"Number of wrong data:"<<nr;
return 0;
	
}
