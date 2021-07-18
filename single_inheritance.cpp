#include<iostream>
using namespace std;
class employee
{
	protected:
		 char n[20],d[20];
		 int sal;
	public:
		void name();
		void desgn();
		void display();
		void sala();
};
void employee::name()
{
	cout<<"enter name";
	cin>>n;
}
void employee::desgn()
{
	cout<<"enter designation";
	cin>>d;
}
void employee::sala()
{
		cout<<"enter monthly salary";
		cin>>sal;
}
void employee::display()
{
	cout<<"name is"<<n<<endl;
	cout<<"designation is"<<d<<endl;
	cout<<"salary for one month is"<<n<<endl;
}
class salary:public employee{
	public:
	int getsalary()
	{
		return(sal*12);
		
	}
};
int main()
{
	int a,i;
	salary s[10];
	cout<<"enter no. of employees";
	cin>>a;
	for(i=0;i<a;i++)
	{
		s[i].name();
		s[i].desgn();
		s[i].sala();
		s[i].display();
		cout<<"total salary"<<s[i].getsalary()<<endl;
	}
}
