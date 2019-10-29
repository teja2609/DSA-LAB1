#include<iostream>
#include<string>
using namespace std;
struct node
 {
     int data;
     struct node* next;
 };
struct node *head=NULL;

void insert(int m)
{
    
         struct node *temp=new struct node;
          
              temp->data=m;
            if(head==NULL)
              {
                 head=temp;
              }
         struct node *p=head;
            while(p->next != NULL)
              {
                 p=p->next;
              }
            p->next=temp;
            temp->next=NULL;
       }
void display()
   {
     struct node *t=head;
     while(t !=NULL)
        {
           cout<<t->data<<" ";
           t=t->next;
        }
      cout<<endl;
    }
void insertt(int k)
   {
     struct node *temp1=new struct node;
         temp1->data=k;
     struct node *x=head,*y=NULL;
     while(x->next!=NULL)
       {
         y=x;
         x=x->next;
       }
        temp1->next=y->next;
        y->next=temp1;
    }
void del()
   {
     struct node *l=head,*q=head ;
     l=l->next->next;
     q->next=l;
   }
     
int main()
{
   int i,n,m,z;
   cout<<"enter the size of the list"<<endl;
   cin>>n;
   for(i=0;i<n;i++)
    {
      cout<<"enter the element"<<endl;
      cin>>m;
      insert(m);
      display();
    }
   cout<<"enter element to be inserted"<<endl;
   cin>>z;
   insertt(z);
   display();
   del();
   display();
   return 0; 
  
}
