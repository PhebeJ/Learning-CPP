#include<iostream>
using namespace std;
int main()
{
	int n,i,j,count;
	int a[50];
	cout<<"enter the length of the integer no";
	cin>>n;
	cout<<"enter the no in the form of array";
	count=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==a[j])
			{
				count+=1;
			}
		}
		cout<<"("<<i<<count<<")";
		count=0;
	}
return 0;
}
