#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>n;      //                      ex:542
	m=n%10;     //ragham aval(yekan)       : 
	while(n>=10)
	n=n/10;    //ragham akhar         first:   second:
	m=m+n;     //                         
	cout<<m;  //chap jam arghame aval va akhar add
 return 0;
}
