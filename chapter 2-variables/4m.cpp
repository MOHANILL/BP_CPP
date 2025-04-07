#include<iostream>
using namespace std;
int main()
{
	int x,kg,g;
	cout<<"Enter weight by gram(g):";
	cin>>x;
	kg=x/1000;
	g=x%1000;
	cout<<"("<<kg<<"kg, "<<g<<"g)";
	return 0;
}
