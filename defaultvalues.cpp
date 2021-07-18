#include<iostream>
#include<math.h>
using namespace std;
int a,b,temp;
void swap()
{
	temp=a;
	a=b;
	b=temp;
}
void main()
{
	cout<<"enter the nos to be swapped";
	cin>>a>>b;
	swap(a,b);
	cout<<"the swapped values are:";
	cout<<a<<b;	
}
