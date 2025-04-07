#include<iostream>
using namespace std;
int main()
{
	int x, desi, metr, canti, mili, y, z;
	cout<<"enter number by milimetr:";
	cin>>x;
	metr=x/1000;
	y=x%1000;
	desi=y/100;
	z=y%100;
	canti=z/10;
	mili=z%10;
	cout<<x<<"mm.="<<metr<<"M.,"<<desi<<"d.,"<<canti<<"c.,"<<mili<<"mm.";
	return 0;
	
}
