#include<iostream>
#include<math.h>
using namespace std;
#define MAX 100
int a[MAX],heap[MAX],b[MAX];

int i=0,count =0,inc;
struct bt_node
{
	int data;
	bt_node *left;
	bt_node *right;

};
bt_node *create()
{
	int x;

	cin >> x;

	bt_node *temp;
	temp = new bt_node();
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	if(x == -1)
		{
			return(NULL);
		}
	cout<<"enter the left"<<endl;
	temp->left = create();
	cout<<"enter the right"<<endl;
	temp->right = create();
	return(temp);
}
void MAX_HEAPIFY(int [],int);
void MAX_HEAPIFY_INS(int [],int);
void BUILD_MAX_HEAP(int heap[])
{
	int m;
	int h_l = count;
	for(m=ceil(h_l/2)-1;m>=0;m--)
	{
		MAX_HEAPIFY(heap,m);
	}

}

void MAX_HEAPIFY(int heap[],int m)
{
	int l,r,largest,temp;
	l = (2*m+1);
	r = (2*m+2);
	if(l< count && (heap[l]>heap[m]))
	{
		largest = l;
	}
	else
	{
		largest = m;
	}
	if(r<count && (heap[largest]<heap[r]))
	{
		largest = r;
	}

	if(largest != m)
	{
		int temp = heap[m];
		heap[m]= heap[largest];
		heap[largest]= temp;
		MAX_HEAPIFY(heap,largest);
	}
	else
	{
		return;
	}



}

void print_level(bt_node* , int );
void preorder(bt_node* root)
{

	if(root ==NULL)
	{
		return;
	}
	else
	{

		cout << root->data<<" ";
		count = count +1;
		preorder(root->left);
		preorder(root->right);

	}
}
int HEIGHT(bt_node* root)
{
	int l ,r;
    if(root == NULL)
    {

        return(0);
    }
    if((root->left == NULL) && (root->right == NULL))
    {

        return(0);
    }
    else
    {
        l = HEIGHT(root->left);
        r = HEIGHT(root->right);
        return(1+((l>r)? l: r ));
    }

}
void level_traversal(bt_node* root)
{
	int h = HEIGHT(root);
	for(int level=1;level<=h+1;level++)
	{
		print_level(root,level);
	}

}

void print_level(bt_node* root, int level)
{
	if(root==NULL)
	{
		return;
	}
	if(level == 1)
	{
		b[i++]= root->data;
	}
	else if(level>1)
	{
		print_level(root->left,level-1);
		print_level(root->right,level-1);
	}
}
void BUILD_MAX_HEAP_INS(int heap[],int inc)
{
	int g;
	int h_inc = inc;
	for(g=ceil(h_inc/2)-1;g>=0;g--)
	{
		MAX_HEAPIFY_INS(heap,g);
	}

}
void MAX_HEAPIFY_INS(int heap[],int g)
{
	int l,r,largest,temp;
	l = (2*g+1);
	r = (2*g+2);
	if(l< inc && (heap[l]>heap[g]))
	{
		largest = l;
	}
	else
	{
		largest = g;
	}
	if(r<inc && (heap[largest]<heap[r]))
	{
		largest = r;
	}

	if(largest != g)
	{
		int temp = heap[g];
		heap[g]= heap[largest];
		heap[largest]= temp;
		MAX_HEAPIFY_INS(heap,largest);
	}
	else
	{
		return;
	}



}





int main()
{
    int leaves,deep,x;
	bt_node *root;

	cout<<"now creating a binary tree"<<endl;
	cout <<"enter the value of root"<<endl;
	root = create();
	cout <<"now printing the tree in preorder"<<endl;
	preorder(root);
	
	level_traversal(root);

	cout <<"printing the tree in level order form:"<<endl;
	for(int k=0;k<count;k++)
	{
		cout << b[k]<<" ";
	}
	for(int j=0;j<count;j++)
	{
		heap[j]=b[j];
	}
	
	BUILD_MAX_HEAP(heap);
	cout<<"now printing the max heap array"<<endl;
	for(int p=0;p<count;p++)
	{
		cout<< heap[p]<<" ";
	}
	cout << "enter the element to be inserted into the heap"<<endl;
	cin >> x;
	heap[count]=x;
	inc= count+1;
	cout << "again max heapifying"<<endl;
	BUILD_MAX_HEAP_INS(heap,inc);
	for(int q=0;q<inc;q++)
	{
		cout << heap[q]<<" ";
	}




}
