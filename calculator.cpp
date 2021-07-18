#include<iostream>
using namespace std;
void add();
void sub();
void mul();
void div();
int a,b,c,y=1,ch,d;
int main()
{
	while (y==1)
	{
		cout<<"enter values of a and b";
		cin>>a>>b;
		cout<<"the calculator operations are 1) addition \t 2) subtraction \t3)multiplication \t4)division "<<endl;
		cout<<"choose one operation"<<endl;
		cin>>ch;
		do{
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				sub();
				break;
			case 3:
				mul();
				break;
			case 4:
				div();
				break;
			case 5:
				exit(0);
		}
		cout<<"do you want to continue? if yes press 1 else press 2";
		cin>>d;
	}while(d==1);
	}
}
void add()
{
	int c=a+b;
	cout<<"sum is"<<c;
}
void sub()
{
	int c=a-b;
	cout<<"difference is"<<c;
}
void mul()
{
	int c=a*b;
	cout<<"product is"<<c;
}
void div()
{
	int c=a/b;
	cout<<"quotient is"<<c;
}
