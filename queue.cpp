#include<iostream>
using namespace std;
class queue
{
	private:
		int q[10];
		int front,rear,max;
	public:
		queue();
		void insert();
		void remove();
		int &operator[](int rear){
			if(rear>max)
			{
				cout<<"index out of bounds";
			}
		}
		void display();
};
queue::queue()
{
	front=rear=-1;
	cout<<"enter no. of elemnts";
	cin>>max;
}
void queue::insert()
{
int n;	
   if (rear == max - 1){
   		printf("Queue Overflow \n");
}
    else
	{
		if (front == -1){
		front = 0;}
		cout<<"inset the element in queue : ";
		cin>>n;
		rear = rear + 1;
		q[rear] = n;

    }

}
void queue::remove()
{
  cout<<"deleted element is"<<q[rear];
	q[--rear];
}
void queue::display()
{
	cout << "Value of q[2] : " << q[2] <<endl;
    cout << "Value of q[5] : " << q[5]<<endl;
    cout << "Value of q[12] : " << q[12]<<endl;	
}
int main()
{
	queue a;
	int i,c;
	do
	{
		cout<<"choose option     1.insert     2.delete";
		cin>>c;
		if(c==1)
		{
			a.insert();
		}
		else
		{
			a.remove();
		}
		cout<<"do you want to continue";
		cin>>i;
	}while(i==1);
	a.display();
}
