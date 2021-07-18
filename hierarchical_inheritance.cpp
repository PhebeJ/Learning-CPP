#include<iostream>
#include<string.h>
using namespace std;
class person{
	protected:
		string name;
		int age;
	public:
		void getpdata();
		void dispdata();
};
void person::getpdata()
{
	getchar();
	cout<<"enter name";
	getline(cin,name);
	cout<<"enter age";
	cin>>age;
}
void person::dispdata()
{
	cout<<"name"<<name<<endl;
	cout<<"age is"<<age<<endl;
}
class employee:public person{
	protected:
		float salary;
		string dept_name;
	public:
		void getedata();
		void dispedata();
};
void employee::getedata()
{
	cout<<"enter salary";
	cin>>salary;
	cout<<"dept name";
	getchar();
	getline(cin,dept_name);
}
void employee::dispedata()
{
	cout<<"name"<<name<<endl<<"salary"<<salary;
	cout<<"dept"<<dept_name;
}
class student:public person{
	protected:
		int roll_no;
		string grade;
	public:
		void getsdata();
		void dispsdata();
};
void student::getsdata()
{
	cout<<"enter roll no";
	cin>>roll_no;
	cout<"grade";
	getchar();
	getline(cin,grade);
}
void student::dispsdata()
{
	cout<<"name \t"<<name<<"roll no\t"<<roll_no<<"grade\t"<<grade;
}
int main()
{
	int c;
	cout<<"1.employee \t 2.student";
	cin>>c;
	if(c==1)
	{
		employee e;
		e.getpdata();
		e.getedata();
		e.dispedata();
	}
	else
	{
		student s;
		s.getpdata();
		s.getsdata();
		s.dispsdata();
	}
	return 0;
}
