#include<iostream>
using namespace std;
int main()
{
   const int n=2;
   int d[n][n], det;
   for(int i=0; i<n;i++)
    {
      for(int j=0; j<n; j++)
         {
          cout<<"Enter number for element i="<<i<<" j="<<j<<":";
          cin>>d[i][j];
         }
    }
   det=d[0][0]*d[1][1]-d[0][1]*d[1][0];
    for(int i=0; i<n;i++)
     {
      for(int j=0; j<n; j++)
          {
           d[i][j]*=det;  
		   cout<<d[i][j]<<"\t";
	      }
		  cout<<"\n";    
     }
 return 0;
}
