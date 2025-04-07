#include<iostream>
using namespace std;
int main()
{
	char line[80];
	do
	{
	 cin.getline(line,80);                   //noe aval cin.getline() ke 80 char darun line khande shavad,
	    if(*line) cout<<"\t["<<line<<"]\n";  //*line yani char gheyr tohi
    }while (*line);
}

void cin.getline(int m, int p)
{
	char ch[p];
	for(int i=0; i<p;i++)
	  cin>>cha;
}
