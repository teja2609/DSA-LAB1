#include<iostream>
#include<string>
using namespace std;

struct Node
   {
    int data;
    struct node *next;
    struct node *prev;
   };

struct node* head=NULL;
int front = 0;
int rear = 0;

class LinkedQueue {
	public:
	Node createNode(int elem)
	{
		Node s = new Node();
		s.data = elem;
		s.next = null;
		return s;		
	}
	int enqueue (int elem)
	{	
		if (head == null){
			cout<<"Creating Head of Stack/n";
			head = createNode(elem);
			front = 1;
			rear = 1;		
		}
		else{
			Node temp = head;
			while(temp.next != null){
				temp = temp.next;
			}
			temp.next = createNode(elem);
			rear++;
		}
		return elem;
	}
	 void search(int elem)
	{
		int count = 0;
		if (head == null){
			cout<<"List is Empty";		
		}
		else{
			Node temp = head;
			while(temp.data != elem && temp.next != null){				
				temp = temp.next;
				count++;
			}
			if(temp.next != null){
				count++;
				cout<<"Element is present at index "+count"\n";
			}
			else
				cout<<"Element Doesnt exist in Stack";
		}
	}
      void dequeue ()
	{
		if (front == 0){
			cout<<"Queue is Empty";		
		}
		else{
			Node temp = head;
			head = temp.next;
			cout<<"Deleted element is :"temp.data"\n";
			front++;
		}
		if(front > rear)
		{
			front = rear = 0;
		}
		
	}
    void display()
	{
		cout<<"Elements in Queue are:\n";
		Node temp = head;
		while(temp.next!=null)
		{
			cout<<" "temp.data "-->";
			temp = temp.next;
		}
		cout<<" "temp.data+"-->null\n";
	}

	
	void getFR()
	{
		cout<<"Front : "front " Rear : "rear" "; 
	}
	
	int size()
	{
		if(front == rear && front == 0)
			return 0;
		else
			return rear - front + 1;
	}
};

	int main()
	{
		int m,k,j;
		 LinkedQueue l;
		bool loop = true;
		while (loop)
		{
			cout<<"\n--------------------------------------------------------------------\n Enter the choice\n";
			cout<<"    1.PUSH 2.POP 3.Search 4.Size 5.Display 6.Peak 7.Exit\n";
			cin>>j;
			switch(j)
			{
				case 1: cout<<"\nEnter the element to add: \n";
				        cin>>k;
				        l.enqueue(k);
				        break;
				case 2: l.dequeue();
				        break;
				case 3: cout<<"\nEnter the element to search: \n";
			            cin>>m;
					    l.search(m);
					    break;
				case 4: cout<<"Size of stack is "l.size()" ";
				        break;
				case 5: l.display();
				        break;
				case 6: l.getFR();
				        break;
				case 7: loop =false;
					    break;
				default: cout<<"\n Invalid Choice";
				        break;
			}
			
		}
		return 0;
	}	

