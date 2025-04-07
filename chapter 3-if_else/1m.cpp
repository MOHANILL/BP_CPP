#include<iostream>
using namespace std;
int main()
{
	float z1,z2,z3;
	cout<<"Enter first side of triangle:";
	cin>>z1;
	cout<<"Enter second side:";
	cin>>z2;
	cout<<"Enter third side:";
	cin>>z3;
    if(z1+z2>z3 && z2+z3>z1 && z1+z3>z2)   // soal 5
    	if(z1==z2 && z2==z3)
        	cout<<"This is Equilateral triangle";
	     else
	         cout<<"This is not Equilateral triangle";
	else
      cout<<"Your data can't make triangle";
	return 0;
}
