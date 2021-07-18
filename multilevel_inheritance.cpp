#include<iostream>
#include<string.h>
using namespace std;
class student{
	protected:
		string name;
		int roll_no;
	public:
		void getsdata();
		void dispdata();
};
void student::getsdata()
{
	getchar();
	cout<<"enter your name";
	getline(cin,name);
	cout<<"enter roll no";
	cin>>roll_no;
}
void student::dispdata()
{
	cout<<"name"<<name<<"\n roll no"<<roll_no;
}
class test:public student{
	protected:
		float mark[5];
	public:
		void gettdata();
		void disptdata();
};
void test::gettdata(){
	for(int i=0;i<5;i++)
	{
		cout<<"enter mark of subject"<<i+1;
		cin>>mark[i];
	}
}
void test::disptdata(){
	cout<<"name "<<name<<"\n roll no"<<roll_no<<"\n marks";
	for(int i=0;i<5;i++)
	{
		cout<<"\t mark of subject"<<i+1;
		cout<<mark[i]<<endl;
	}
}
class result:public test{
	protected:
		float r;
	public:
		result()
		{
			r=0;
		}
		void calculate();
		void disprdata();
};
void result::calculate(){
	for(int i=0;i<5;i++){
		r+=mark[i];
		r/=5;
	}
}
void result::disprdata(){
	cout<<"name"<<name<<"\n roll no"<<roll_no<<"\n marks";
	for(int i=0;i<5;i++)
	{
		cout<<"\t mark of subject"<<i+1;
		cout<<mark[i]<<endl;
	}
	cout<<"result"<<r<<endl;
}
int main(){
	int c;
	cout<<"1.student \n 2.test \n 3.result";
	cin>>c;
	if(c==1)
	{
		student s;
		s.getsdata();
		s.dispdata();
	}
	else if(c==2)
	{
		test t;
		t.getsdata();
		t.gettdata();
		t.disptdata();
	}
	else
	{
		result r;
		r.getsdata();
		r.gettdata();
		r.calculate();
		r.disprdata();
	}
	return 0;
}
