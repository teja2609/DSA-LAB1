#include<iostream>
using namespace std;
#define max 101
class Queue
{
private:
	int front ,rear;
	int a[max];
public:
	Queue()
	{
		front = rear = -1;
	}
	bool isempty()
	{
		if(front == -1 && rear == -1)
		{
			return(true);
		}
		return(false);
	}
	bool isfull()
	{
		return (rear+1)%max ==front ? true:false;
	}

	void Enqueue(int x)
	{
		if(isfull())
		{
			cout << "Queue is full"<<endl;
			return;
		}
		if(isempty())
		{
			front = rear =0;
		}
		else
		{
			rear = (rear+1)%max;
		}
		a[rear] = x;
	}
	int Dequeue()
	{
		cout << "Dequeing starts:";
		if(isempty())
		{
			cout<<"Queue is already empty "<<endl;
		}
		if(rear == front)
		{
			rear = front-1;
		}
		else
		{
			front = (front+1)%max;
		}
	}
	void Front()
	{
		if(front == -1)
		{
			cout<<"Error: cannot return front from empty queue\n";
			return;
		}
		cout <<"poped element is"<<a[front]<<endl;
		
	}
	void display()
	{
		int count = (rear+max-front)%max + 1;
		cout<<"Queue       : ";
		for(int i = 0; i <count; i++)
		{
			int index = (front+i) % max; // Index of element while travesing circularly from front
			cout<<a[index]<<" ";
		}
		cout<<"\n\n";
	}

};
int main()
{
	int n,x,k,out;
	cout <<"enter the number of push operations"<<endl;
	cin >>n;
	Queue q;
	for(int i=0;i<n;i++)
	{
		cout << "enter element"<<endl;
		cin >> x;
		q.Enqueue(x);
		q.display();
	}
	cout << "enter the number of pop"<<endl;
	cin >>k;
	for(int j=0;j<k;j++)
	{
		 q.Front();
		q.Dequeue();
		
		
		q.display();
	}
}
