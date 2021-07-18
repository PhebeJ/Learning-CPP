#include<iostream>
using namespace std;
int a[50][50],b[50][50],c[100][100];
int i,j,k,p,q,m,n,r,s;
cout<<"enter size of matrix1"<<endl;
cin>>m>>n;
cout<<"enter size of matrix 2"<<endl;
cin>>r>>s;
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		cin>>a[i][j];
	}
}
cout<<"enter second matrix"<<endl;
for(i=0;i<s;i++)
{
	for(j=0;j<r;j++)
	{
		cin>>b[i][j];
	}
}
for(i=0;i<n;i++)
{
	for(j=0;j<s;j++)
	{
		for(k=0;k<m;k++)
		{
			*(*(c+i)+j)+=*(*(a+i)+j)*(*(*b+k)+j);
		}
	}
}
for(i=0;i<n;i++)
{
	for(j=0;j<s;j++)
	{
		cout<<c[i][j];
	}
}
