#include<iostream>
using namespace std;
int cmp(char* s1,char* s2,int n)
{
	for(int i=0;i<n && *(s2+i)!=0;i++)
	    {
	    	if(*(s1+i)<*(s2+i))
	    	return -1;
	      else
	         return 1;
	    }
}
