#include<iostream>
using namespace std;
class student{
	private:
		char n[10],b[10];
		int r;
	public:
		void name();
		void roll();
		void branch();
		void display();
		
};
void student::name()
{
	cout<<"enter name of the student"<<endl;
	cin>>n;
	
}
void student::roll()
{
	cout<<"enter roll no."<<endl;
	cin>>r;
}
void student::branch()
{
	cout<<"enter branch"<<endl;
	cin>>b;
}
void student::display()
{
	cout<<"name is"<<n<<endl;
	cout<<"branch is"<<b<<endl;
	cout<<"roll no. is"<<r<<endl;
}
int main()
{
	int i,c;
	student st[10];
	c=1;
	do
	{
		cout<<"for student no."<<c<<endl;
		st[c].name();
		st[c].roll();
		st[c].branch();
		st[c].display();
		cout<<"do you want to continue"<<endl;
		cin>>i;
		if(i==1)
		{
			c++;
		}
    }while(i=1);
}
