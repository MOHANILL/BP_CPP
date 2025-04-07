#include<iostream>
using namespace std;
int emtehan(int x,int y,int z)
{
  //x      y       z
  //2      3       4  //
  //4      3       2      ///
  
  //3      4       2 //
  //3      2       4     ///
  
  //2      4       3  //
  //4      2       3     ///
 if(x<y)
    { 
      if(y<z)
        return y;
     else 
       {
        if(x<z)
          return z;
       }
    }
  else
    if(z>x)
      return x;
  else if(z>y) 
       return z;
	  else
	    return y;      	
}
int main()
{
  int x,y,z;
  cin>>x;
  cin>>y;
  cin>>z;
  cout<<emtehan(x,y,z);
 return 0;
}
