#include<iostream>
#include<string>
using namespace std;
struct node
   {
    int data;
    struct node *next;
    struct node *prev;
   };
struct node* head=NULL;
void insert(int val)
  {
     struct node* temp=new struct node;
     temp->data=val;
     temp->next=NULL;
    if(head==NULL)
      {
        head=temp;
        temp->prev=NULL;
      }
    struct node* l=head; 
    while(l->next!=NULL)
      {
        l=l->next;
      }
    l->next=temp;
     temp->prev=l;
     temp->next=NULL; 
   }
void display()
 {
   struct node* x=head;
   while(x !=NULL)
    {
     cout<<" "<< x->data <<" ";
     x=x->next;
    }
     cout<<endl;
 }
void insertt(int val)
  {
    struct node* p=head;
    struct node* q=head;
    struct node* temp1=new struct node;
           temp1->data=val;
    while(p->next!=NULL) 
        p=p->next;
    while(q->next!=p)
        q=q->next;
     q->next=temp1;
     temp1->prev=q;
     temp1->next=p;
     p->prev=temp1;
      
   }
void del()
 {
   struct node* p=head;
   struct node* q=head;
   p=p->next->next;
   q->next=p;
   p->prev=q;
 }

int main()
{
  int i,m,n,o;
   cout<<"enter the size"<<endl;
   cin>>n;
   for(i=0;i<n;i++)
    {
      cout<<"enter the element"<<endl;
      cin>>m;
      insert(m);
      display();
    }
    cout<<"enter the element to be inserted in second pos. from last"<<endl;
    cin>>o;
    insertt(o);
    display();
    cout<<"after deletion\n";
    del();
    display();
    return 0;
}




