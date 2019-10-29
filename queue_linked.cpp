#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
void Enqueue(int x)
{
	struct node *temp = new struct node;
	temp->data =x;
	temp->next = NULL;
	if(front==NULL && rear == NULL)
	{
		front = temp;
		rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}
void Dequeue()
{
	struct node *p = front;
	if(front == NULL)
	{
		cout << "queue is empty"<<endl;
		return;
	}
	if(front == rear)
	{
		front = rear = NULL;
	}
	else
	{
		front = front->next;
	}
	free(p);
}
void Front()
{
	if(front==NULL)
	{
		cout <<"empty queue"<<endl;
		return;
	}
	cout << "front element is:"<<front->data<<endl;
}
void display()
{
	struct node *s = front;
	while(s!=NULL)
	{
		
		cout << s->data<<" ";
		s = s->next;
	}
	cout<<endl;

}
int main()
{
	int n,x,k;
	cout <<"enter the number of push operations"<<endl;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cout << "enter the element"<<endl;
		cin >> x;
		Enqueue(x);
		display();
	}
	cout <<"enter the number of pop operations"<<endl;
	cin >> k;
	for(int j=0;j<k;j++)
	{
		Front();
		Dequeue();
		display();
	}
}
