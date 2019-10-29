#include<iostream>
#include<string>
using namespace std;


class stack 
{
    public:
	int arr[10];
	int top = -1;
	void push(int x)
	{
		if(top <9)
		arr[++top]=x;
	}
	char pop()
	{
		int x;
		x=arr[top];
		top--;
		return x;
	}
	int getTop()
	{
		return top;
	}
	int peek()
	{
		return arr[top];
	}
	bool isEmpty()
	{
		return (top == -1)?true:false;
	}
	void display()
	{
	   int i;
	   cout<<"elements are\n";
       for(i=0;i<sizeof(arr);i++)
        {
          cout<<arr[i]<<" \n";
        }
	}
};

int main() 
	{
		int j,k;
		stack l;
		bool loop = true;
		while (loop)
		{
			cout<<"\n--\n Enter the choice:  1.PUSH 2.POP 3.getTop 4.peek 5.isEmpty 6.display 7.exit\n";
			cin>>j;
			
			switch(j)
			{
				case 1: cout<<"\nEnter the element to push \n";
				cin>>k;
				        l.push(k);
						break;
				case 2: l.pop();
				        break;
				case 3: l.getTop();
					    break;
				case 4: l.peek();break;
				case 5: l.isEmpty();break;
				case 6: l.display();break;
				case 7: loop =false;
					    break;
				default: cout<<"\n Invalid Choice";
				          loop=false;;
				          break;
			}
	}
	return 0;
}