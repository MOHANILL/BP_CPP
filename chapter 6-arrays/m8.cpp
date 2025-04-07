#include<iostream>
using namespace std;
int main()
{
	int n, i;
	cout<<"number of the data:";
	cin>>n;
	float d[n];
	for(i=0; i<n; i++)
	  {
	   cout<<"Data"<<i+1<<"=";
	   cin>>d[i];
      }
     if(d[0]<d[1])
	   {
	   	i=1;
	   	while(d[i]>d[i-1] && i<n-1)
	   	i++;
	 	if(d[i]>d[i-1])
	 	    cout<<"soudi";
	 	else
	 	    cout<<"bi nazm";
	   } 
	else
	   {
	   	i=1;
	   	while(d[i]<d[i-1] && i<n-1)
	   	i++;
	 	if(d[i]<d[i-1])
	 	    cout<<"Nozuli";
	 	else
	 	    cout<<"bi nazm";	
	   }
	return 0;
}
