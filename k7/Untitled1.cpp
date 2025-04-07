#include<iostream>
using namespace std;
int main()
{
  int m=44;
  int* p=&m;
  int& r=m;
  int n=(*p++);
  int* q=p-1;
  r=*(--p)+1;
  ++*q;
  cout<<*q;

}

