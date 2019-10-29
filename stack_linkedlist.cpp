#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *top = nullptr;
void Push(int x)
{
    struct node *temp = new struct node;
    temp->data =x;
    temp->next = top;
    top = temp;
}
void Pop()
{
    struct node *temp1;
    if(top == nullptr)
    {
        return;
    }
    temp1 = top;
    top = top->next;
    delete(temp1);

}
void display()
{
    struct node *p;
    p = top;
    while(p !=nullptr)
    {
        cout<< p->data <<" ";
        p = p->next;
    }
    cout <<endl;

}
int main()
{
    int n,x,k;
    cout <<"enter the number of push operations"<<endl;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cout <<"enter the element"<<endl;
        cin >> x;
        Push(x);
        display();
    }
    cout <<"enter number of pop operations"<<endl;
    cin >> k;
    for(int j=0;j<k;j++)
    {
        Pop();
        display();
    }
    return 0;

}
