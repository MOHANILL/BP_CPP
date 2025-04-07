#include<iostream>
using namespace std;
void*memcpy(void* s1,const void* s2,size_t count)  // tabei ke vazife on copy kardan ghesmati az hafezas
{
	void* r=s1;
	while(count--)
	{
		s1=*(char*) s2(*char)*;
		s1=(char*) s1+1;
		s2=(char*) s2+1;
	}
 return r;
}
