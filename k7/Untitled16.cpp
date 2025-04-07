#include<iostream>
#include<cstring>

using namespace std;
class rational
{
	public:
		rational(){cout<<1
		;}
		~rational(){cout<<2;
		}
	private:
		int num,den;
	
};
void main()
{
	{rational x;  cout<<3
	}
	cout<<4;
	{rational y;  cout<<5
	}
}
