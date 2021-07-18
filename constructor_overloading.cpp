#include<iostream>
using namespace std;
class volume{
	private:
		int volu;
	public:
		 volume(int a);
		 volume(float r);
		 volume(int l,int b,int h);
		 volume(int r,int h);
	
};
volume::volume(int a)
{
	volu=a*a*a;
	cout<<"volume of cube is"<<volu;
	
}
volume::volume(float r)
{
	volu=((4/3)*3.14*r*r*r);
	cout<<"volume of sphere is"<<volu;
}
volume::volume(int l,int b,int h)
{
	volu=l*b*h;
	cout<<"volume of rectangle is"<<volu;
	
}
volume::volume(int r,int h)
{
	volu=3.14*r*r*h;
	cout<<"volume of cylinder is"<<volu;
}
int main()
{
	int c,i,a,l,r,h,b;
	float ra;
	do
	{
		cout<<"choose option   1.cube    2.sphere      3.rectangle       4.cylinder";
		cin>>c;
		if(c==1)
		{
				cout<<"enter side";
				cin>>a;
				volume p( a);
			}
		else if(c==2)
		{
				cout<<"enter radius";
				cin>>ra;
				volume q( ra);
	}
		else if(c==3)
		{
				cout<<"enter length,breadth and height of rectangle";
				cin>>l>>b>>h;
				volume r( l, b, h);
		}
		else
		{
				cout<<"enter radius and height of cylinder";
				cin>>r>>h;
				volume s( r, h);
			
		}
		cout<<"do you want to continue";
		cin>>i;
		}while(i=1);
}
