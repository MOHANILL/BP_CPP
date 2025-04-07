#include<iostream>
#include<cstring>
#imclude"person.h"
using namespace std;
class maried:public person
{
	public:
		maried(string v,string n,long h,int p,string d,string m):person(v,n,h,p),fname(d),lname(m){}
		void setmarry(int y)marry=y;
		int marry(){return marry;}
		string fname(){return fname;}
		string Lname(){return lname;}
		void print(){cout<<"h's first name:"<<fname<<"h's last name:"<<lname<<"year of marriage:"<<marry<<endl;}
	private:
		string fname,lname;
};
int main()
  {string firstname,lastname, 1h, fn;
  int ya, bi;
  long d;
  for(int i=1;i<51,i++)
     {
     	cout<<"enter first name"<<"\tlast name"<<"\t"<<"birthday"<<"\t"<<"id"<<"\t"<<"h's first name"<<"\t"<<"h's last name"<<"\t"<<"year of marriage"<<endl;
     	cin>>firstname>>last name>>bi>>d>>fh>>1h>>ya;
     	x.setmarry(ya);
     	int r=x.marry();
     	if(lastname==1h){
     		if(r>1399){
     			x.print();
     			cout<<"first name:";
     			x.printname();
     			cout<<"last name";
     			x.printfname();
     			cout<<endl
     		}
     	}
     }
	return 0;
  }
