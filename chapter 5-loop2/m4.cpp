#include<iostream>
using namespace std;
int main()
{

	int x;
	bool ok;
	do 
	{
		cin>>x;
		ok= x==x%10;
	} while(!ok);
  return 0;
}

