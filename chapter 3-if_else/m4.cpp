#include<iostream>
using namespace std;
int main()
{
	float z1,z2,z3,r;
	cout<<"Enter first side of triangle:";
	cin>>z1;
	cout<<"Enter second side:";
	cin>>z2;
	cout<<"Enter third side:";
	cin>>z3;
	cout<<"Is it right triangle?(0,1):";
	cin>>r;
	if(z1+z2>z3 && z2+z3>z1 && z1+z3>z2)
      if(z1==z2 && z2==z3 && r==0)
     	cout<<"This is Equilateral triangle";
      else  
	    if((z1==z2 && z3!=z2)||(z2==z3 && z1!=z2)||(z3==z1 && z2!=z3))
	      if(r==1)
	           cout<<"This is isosceles & right triangle";
	        else 
	            cout<<"This is isosceles triangle";
	       
         else 
           if(r==1 && z1!=z2 && z1!=z3 && z2!=z3)
              cout<<"This is right triangle";
            else
		       cout<<"Nothing(Error)";
	else
	    cout<<"Your data can't make triangle";
    return 0;
}
