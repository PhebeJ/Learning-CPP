#include<iostream>
using namespace std;
class volume{
	private:
		int volu;
	public:
		void vol(int a);
		void vol(float r);
		void vol(int l,int b,int h);
		void vol(int r,int h);
};
void volume::vol(int a)
{
	volu=a*a*a;
	cout<<"volume of cube is"<<volu;
}
void volume::vol(float r)
{
	volu=((4/3)*3.14*r*r*r);
	cout<<"volume of sphere is"<<volu;
}
void volume::vol(int l,int b,int h)
{
	volu=l*b*h;
	cout<<"volume of rectangle is"<<volu;
}
void volume::vol(int r,int h)
{
	volu=3.14*r*h*r;
	cout<<"volume of cylinder is"<<volu;
}
int main()
{
	int c,i,a,l,r,h,b;
	float ra;
	volume v;
	do{
		cout<<"choose option 1.cube\t 2.sphere \t 3.rectangle \t 4.cylinder";
		cin>>c;
		switch(c)
		{
			case 1:
				cout<<"enter side";
				cin>>a;
				v.vol(a);
				break;
			case 2:
				cout<<"enter radius";
				cin>>ra;
				v.vol(ra);
				break;
			case 3:
				cout<<"enter length,breadth and height";
				cin>>l>>b>>h;
				v.vol(l,b,h);
				break;
			case 4:
				cout<<"enter radius and height of cylinder";
				cin>>r>>h;
				v.vol(r,h);
				break;
		}
		cout<<"do you want to continue";
		cin>>i;
	}while(i==1);
}
