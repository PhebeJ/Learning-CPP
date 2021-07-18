#include<iostream>
using namespace std;
class employee
{
	protected:
		string name,compname;
		char a[30],b[30];
		int i,c,size,age;
	public:
		void getdetails();
};
void employee::getdetails()
{
	cout<<"enter name of employee";
	getline(cin,name);
	cout<<"enter your age";
	cin>>age;
	getchar();
	cout<<"enter company name";
	getline(cin,compname);
}
class salary:public employee{
	private:
		float sal,annualsal;
	public:
		void getsal();
		void disp();
};
void salary::getsal(){
	cout<<"enter salary";
	cin>>sal;
	annualsal=sal*12;
}
void salary::disp()
{
	cout<<"name of employee"<<name<<endl;
	cout<<"age is"<<age<<endl;
	cout<<"company name is"<<compname<<endl;
	cout<<"annual slary is"<<annualsal<<endl;
}
int main()
{
	int i;
	salary *ptr=new salary[10];
	for(i=1;i<=10;i++)
	{
		ptr[i].getdetails();
		ptr[i].getsal();
		ptr[i].disp();
	}
}
