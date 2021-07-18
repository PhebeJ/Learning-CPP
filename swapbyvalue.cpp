#include <iostream>
using namespace std;
void swap(int a,int b)
{
	int c=a;
	a=b;
	b=c;
	cout<<"inside function value after swapping is : a"<<a<<"b"<<b;
}
void main()
{
	int a,b;
	cout<< "enter the 2 nos";
	cin>>a>>b;
	swap(a,b);
	cout<<"outside function value after swapping is : a"<<a<<"b"<<b;
}
