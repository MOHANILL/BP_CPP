#include<iostream>
using namespace std;
int main()
{
	int n, nr=0;
	cout<<"Enter number of students:";
	cin>>n;
	string name[n], fname[n]; //char
	float sum=0, av=0, score[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Enter his/her name:";
		cin>>name[i];
		cout<<"Enter his/her family name:";
		cin>>fname[i];
		cout<<"Enter his/her score:";
		cin>>score[i];
		sum+=score[i];
	}
	av=sum/n;
	for(int i=0; i<n; i++)
	    if(score[i]>av)
	     {
	       nr+=1;       //nr++
	       cout<<"name & family name:"<<name[i]<<"  "<<fname[i]<<endl;
	     }
	cout<<"number of the studants that their score is more than average all:"<<nr;
  return 0;
}
