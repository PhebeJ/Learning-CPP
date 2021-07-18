#include<iostream>
using namespace std;
class stack{
	private:
	int st[100];
	int top,var;
	public:
		stack();
		void push();
		int pop();
};
stack::stack()
{
	top=-1;
}
void stack::push()
{
	cout<<"enter element to be pushed";
	cin>>var;
	st[++top]=var;
	cout<<"element is"<<var;
}
int stack::pop()
{
	cout<<"elemnt to be popped is"<<st[top];
	st[--top];
}
int main()
{
	int i,c;
	stack s1;
	do
	{
		cout<<"choose option 1)push\t 2)pop";
		cin>>c;
		if(c==1)
		{
			s1.push();
		}
		else
		{
			s1.pop();
		}
		cout<<"do you want to continue";
		cin>>i;
	}while(i==1);
}
