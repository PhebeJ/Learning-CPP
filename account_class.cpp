#include<iostream>
using namespace std;
class account
{
	private:
		char name[20];
		int type,amt,bal;
	public:
		void create();
		void deposit();
		void withdraw();
		void display();
};
void account::create()
{
	cout<<"enter name";
	cin>>name;
	cout<<"enter type of account 1)savings\t 2)current\t 3)RD\t 4)FD";
	cin>>type;
	int balance=0;
	cout<<"balance is"<<bal;
}
void account::deposit()
{
	cout<<"enter amt to be deposited";
	cin>>amt;
	bal+=amt;
	cout<<"balance is"<<bal;
	
}
void account::withdraw()
{
	cout<<"current balance is"<<bal;
	cout<<"enter amount to be withdrawn";
	cin>>amt;
	if(bal>1000)
	{
		bal+=amt;
	}
	else
	{
		cout<<"balance insufficient";
	}
	cout<<"balance is"<<bal;
}
void account::display()
{
	cout<<"the balance is";
	cout<<bal<<endl;
	cout<<"name is"<<name<<endl;
	cout<<"account type is"<<type<<endl;
}
int main()
{
	int i,n,c,p,count;
	account a[10];
	cout<<"enter no. of customers";
	cin>>n;
	count=1;
	for(i=0;i<n;i++)
	{
		do
		{
			cout<<"customer no."<<count;
			cout<<"options are 1.create\t 2.insert\t 3.withdraw";
			cin>>c;
			switch(c)
			{
				case 1:
					a[i].create();
					a[i].display();
					break;
				case 2:
					a[i].deposit();
					a[i].display();
					break;
				case 3:
					a[i].withdraw();
					a[i].display();
			}
			cout<<"do you want to continue";
			cin>>p;
		}while(p=1);
		count+=1;
	}
	return 0;
}
