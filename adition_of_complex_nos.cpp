#include<iostream>
using namespace std;
class A
{int a,b;
public:
	A(){
	};
	A(int i,int j)
	{
		a=i;
		b=j;
	}
	void show()
	{
		cout<<a<<"+i"<<b;
	}
	A operator +(A);
};
A A::operator +(A obj)
{
	A temp;
	temp.a=a + obj.a;
	temp.b=b + obj.b;
	return(temp);
}
int main()
{
	int a,b,e,f;
	cout<<"enter real and imaginary part of 1";
	cin>>a>>b;
	cout<<"enter real and imaginary part of 2";
	cin>>e>>f;
	A c1(a,b),c2(e,f),c3;
	cout<<"first no. is";
	c1.show();
	cout<<"second no. is";
	c2.show();
	c3=c1+c2;
	cout<<"sum is";
	c3.show();
}
