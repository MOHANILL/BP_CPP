#include<iostream>
using namespace std;
unsigned len(const char* s)
{
	unsigned int nr=0;
   while(*s!=0)	
     {
     	nr++;
     	s++;
     }
  return nr;
}
