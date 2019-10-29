#include<iostream>
using namespace std;
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
int NL(bt_node* root)
{
    if(root == NULL)
    {
        return(0);
    }
    if((root->left == NULL) && (root->right == NULL))
    {

        return(1);
    }
    else
    {
       return(NL(root->left)+NL(root->right));
    }


}
int Depth(bt_node* root)
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
        l = Depth(root->left);
        r = Depth(root->right);
        return(1+((l>r)? l: r ));
    }

}
void inorder(bt_node* root)
{
	if(root ==NULL)
	{
		return;
	}
	else
	{

		inorder(root->left);
		cout << root->data<<" "<<endl;
		inorder(root->right);

	}
}
void preorder(bt_node* root)
{
	if(root ==NULL)
	{
		return;
	}
	else
	{
		cout << root->data<<" "<<endl;
		preorder(root->left);
		preorder(root->right);

	}
}
void postorder(bt_node* root)
{
	if(root ==NULL)
	{
		return;
	}
	else
	{

		postorder(root->left);
		postorder(root->right);
		cout << root->data<<" "<<endl;

	}
}
int main()
{
    int leaves,deep;
	bt_node *root;
	cout<<"now creating a binary tree"<<endl;
	cout <<"enter the value of root"<<endl;
	root = create();
	cout <<"now printing the tree in preorder"<<endl;
	preorder(root);
	cout<<"now printing the tree in inorder"<<endl;
	inorder(root);
	cout<<"now printing the post order"<<endl;
	postorder(root);

	leaves = NL(root);
    cout<<"number of leaf nodes are:"<<leaves<<endl;
    deep = Depth(root);
    cout <<"Depth of the tree is:"<<deep<<endl;
}
