#include<iostream>
using namespace std;
class student{
	protected:
		char na[20];
		int r,c,m;
	public:
		void getname()
		{
			cout<<"enter name";
			cin>>na;
		}
		void getroll()
		{
			cout<<"enter roll no.";
			cin>>r;
		}
		void getclass()
		{
			cout<<"enter class";
			cin>>c;
		}
		void getmark()
		{
			cout<<"enter total marks for all subjects";
			cin>>m;
		}
		void display()
		{
			cout<<"name is"<<na<<endl;
			cout<<"roll no. is"<<r<<endl;
			cout<<"class is"<<c<<endl;
			cout<<"marks for all subjects is"<<m<<endl;
		}
		
};
class sports{
	protected:
		int n;
	public:
		void getevent()
		{
		cout<<"enter no. of sports events";
		cin>>n;
	}
		void disevent()
		{
			cout<<"no. of sports events participated is"<<n<<endl;
		}
};
class mark:public student,public sports{
	public:
	int p;
	int total(){
	cout<<"mark for each sports item is 10";
	p=n*10;
	cout<<"total marks for sports is"<<p<<endl;
	return(p+m);}
};
int main()
{
	int s,i;
	mark ma[10];
	cout<<"enter no. of students";
	cin>>s;
	for(i=0;i<s;i++)
	{
		ma[i].getname();
		ma[i].getroll();
		ma[i].getclass();
		ma[i].getmark();
		ma[i].getevent();
		ma[i].display();
		ma[i].disevent();
		cout<<"total mark is"<<ma[i].total()<<endl;
	}
}
