#include<iostream>
#include<cstring>
#imclude<fstream>
using namespace std;
bool control(int, int, int)
int main()
{
	ifstream DA_file("da.txt");
	ofstream CH_file("ch.txt");
	 const int p=20;
	 char ab[12];
	 char cd[11];
	 char ef[50];
	 string name;
	 string fa;
	 int d,m,y;
	 for(int i=1;i<=v; i++)
	    {
	    	DA_file>>name;
	    	DA_file>>fa;
	    	DA_file>>ab;
	    	DA_file>>cd;
	    	DA_file>>y>>m>>d;
	    	DA_file>>ef;
	    	if(control(m,y,d))
	    	  {
	    	  	cout<<name<<"\t"<<fa<<":"<<ab<<"\n"<<ef<<"\n";
	    	  	CH_file<<name<<"\t"<<fa<<";"<<"\t"<<ab<<endl<<endl;
	    	  }
	    }
	return 0;
}
