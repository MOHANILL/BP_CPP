#include<iostream>
using namespace std;
int main()
{
	int small=0, large=0;
	char ch;
	cin>>ch;
	while(ch!='.')
	{
		switch (ch)
		{
			case 'a':
			case 'i':
			case 'e':
			case 'o':
			case 'u':small++; break;
			case 'A':
			case 'I':
			case 'E':
			case 'O':
			case 'U':large++;break;
		}
		cin>>ch;
	}
	cout<<"s="<<small<<", L="<<large;
 return 0;
}
