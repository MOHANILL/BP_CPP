#include<iostream>
using namespace std;
int main()
{
	int n;
   cout<<"Enter number:";
   cin>>n;
   int d[n][n];
   for(int i=0; i<n;i++)
   {
      for(int j=0; j<n; j++)
          	
          	 if(j>=i)
          	  d[i][j]=1;
           else
              d[i][j]=0;
   }
   for(int i=0; i<n;i++)
     {
      for(int j=0; j<n; j++)
          	  cout<<d[i][j]<<"\t";
              cout<<"\n";
     }
 return 0;
}
