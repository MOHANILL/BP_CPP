#include<iostream>
using namespace std;
short* loc(short* a1, short* a2, int n1, int n2)
{
	short* endl =a1 + n1;
	 for(short* p1=a1;p1<endl;p1++)
	    if(*p1==*a2)
	    {
	    	int j=0;
	    	while(p1[j]==a2[j] && j<n2)
	    	j++;
	    	if(j==n2) return p1;
	    }
	return 0;
}
  int main()
  {
  	short a1[9]={11, 11, 11, 11, 11, 22, 33, 44, 55};
  	short a2[5]= {11, 11, 11, 22, 33};
  	cout<< "Array a1 begins at location\t"<<a1<<endl;
  	cout<< "Array a2 begins at location\t"<<a2<<endl;
  	short* p=loc(a1, a2, 9, 5);
  	if(p)
      {
      	cout<<"Array a2 found at location\t"<<p<<endl;
      	for(int i=0;i<5; i++)
      	   cout<<"\t"<< &p[i] <<": "<<p[i]<< "\t" << &a2[i] <<": "<< a2[i] << endl;	
  	  }
  	else cout<<" Not found.\n";
  }
