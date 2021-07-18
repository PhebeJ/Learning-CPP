#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
	cout<<"inside function values of a is"<<a<<"values of b is"<<b;
}
int main()
{
	int a,b;
	cout<<"enter the values a and b";
	cin>>a>>b;
	cout<<"before swapping values are : a"<<a<<"b is"<<b;
	swap(a,b);
	cout<<"outside function values are : a is"<<a<<"b is"<<b;
}
