#include<iostream>
using namespace std;
int main()
{
	int x,sum=0;
    for(int i=2;i<100;i++)       //ex:7
       {
       	x=2;
       	while(i%x!=0 && x<=i/2)  //(7/2=3.5)=> first x=2   second x=3
        x++;
       	if(i%x!=0)
       	sum+=i;
       	
       }
       cout<<"Sum of prime numbers between 2-100="<<sum;
   return 0;
}
