#include<iostream>
#include<cstring>
#imclude"person.h"
using namespace std;
class exam
{
public:
	exam(){p1=0;p2=1;}
	exam(int m){p1=m;p2=1;}
	exam(int m, int n){p1=m;p2=n;}
	~exam(){cout<<"finish"<<endl;}
	int min(){if(p1<p2) return p1
	           else return p2}
private:
    int p1, p2;	
};
int main()
{
	cout<<"start"<<endl;
	exam c1, c2(2),c3(10,20);
	cout<< c1.min<<endl<<c2.min<<endl<<c3.min(); //nabudgar 3bar tekrar mishavad
	cout<<"End"<<endl;
  return 0;
}
