#include<iostream>
using namespace std;
#define max 101
int a[max];
int top = -1;
void Push(int x)
{
    if(top == max-1)
    {
        cout<<"stack is filled";
        return;
    }
    a[++top] = x;

}
void Pop()
{
    if(top == -1)
    {
        cout <<"stack is already empty"<<endl;
        return;
    }

    top--;

}
void display()
{
    for(int j=0;j<=top;j++)
    {
        cout<<a[j]<<" ";
    }
    cout <<endl;
}


int main()
{
    int n,x,k;

    cout << "enter the number of push operations"<<endl;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cout << "enter the element"<<endl;
        cin >> x;
        Push(x);
        display();

    }
    cout << "enter the number of pop operations"<<endl;
    cin >> k;
    for(int p=0;p<k;p++)
    {

        Pop();
        display();
    }
    return 0;

}
