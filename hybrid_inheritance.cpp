#include<iostream>
using namespace std;
class person{
	protected:
		char name[20];
		int code;
	public:
		void getdata()
		{
			cout<<"enter name";
			cin>>name;
			cout<<"enter code";
			cin>>code;
		}
		void putdata()
		{
			cout<<"name is"<<name<<endl;
			cout<<"code is"<<code<<endl;
		}
};
class account:public person
{
	protected:
		int pay;
	public:
		void getd()
		{
			cout<<"enter pay";
			cin>>pay;
		}
		void putd()
		{
			cout<<"pay is"<<pay<<endl;
		}
};
class admin:public person{
	protected:
		int exp;
	public:
		void getinfo()
		{
			cout<<"enter years of experience";
			cin>>exp;
		}
		void putinfo()
		{
			cout<<"experience is"<<exp<<endl;
		}
};
class master:public account,public admin
{
	private:
		char dep[20];
	public:
		void get()
		{
			cout<<"enter dept";
			cin>>dep;
		}
		void put()
		{
			cout<<"department is"<<dep<<endl;
		}
};
int main()
{
	account acc;
	master obj;
	acc.getdata();
	acc.getd();
	obj.getinfo();
	obj.get();
	cout<<"employee details";
	acc.putdata();
	acc.putd();
	obj.putinfo();
	obj.put();
}
