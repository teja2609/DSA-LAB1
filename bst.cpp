#include<iostream>
using namespace std;
struct bst_node
{
	int data;
	bst_node *left;
	bst_node *right;

};
bst_node* Getnew(int x)
{
	struct bst_node *temp = new struct bst_node();
	temp->data =x;
	temp->left = NULL;
	temp->right = NULL;
	return(temp);
}
bst_node* insert(bst_node*root ,int x)
{
	if(root == NULL)
	{
		root = Getnew(x);

	}
	else if( x <= root->data)
	{
		root->left = insert(root->left,x);
	}
	else
	{
		root->right = insert(root->right,x);
	}
	return(root);
}
bst_node* FindMin(bst_node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}

// Function to search a delete a value from tree.
bst_node* Delete(bst_node*root, int data) {
	if(root == NULL) return root;
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
	// Wohoo... I found you, Get ready to be deleted
	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) {
			delete root;
			root = NULL;
		}
		//Case 2: One child
		else if(root->left == NULL) {
			bst_node* temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			bst_node* temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else {
			bst_node* temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}
bst_node* inorder(bst_node* root)
{
	if(root ==NULL)
	{
		return(0);
	}
	else
	{

		inorder(root->left);
		cout << root->data<<" "<<endl;
		inorder(root->right);

	}
}
bst_node* preorder(bst_node* root)
{
	if(root ==NULL)
	{
		return(0);
	}
	else
	{
		cout << root->data<<" "<<endl;
		preorder(root->left);
		preorder(root->right);

	}
}
bst_node* postorder(bst_node* root)
{
	if(root ==NULL)
	{
		return(0);
	}
	else
	{

		postorder(root->left);
		postorder(root->right);
		cout << root->data<<" "<<endl;

	}
}
bool search(bst_node*root,int k)
{
	if(root==NULL)
	{
		return(false);
	}
	else if(root->data == k)
	{
		return(true);
	}
	else if(k <= root->data)
	{
		return(search(root->left,k));
	}
	else
	{
		return(search(root->right,k));
	}
}
int Min(bst_node*root)
{
	struct bst_node*cur = root;
	if(root == NULL)
	{
		cout << "tree is empty "<<endl;
		return 0;
	}

		if(cur->left ==NULL)
		{
			return(cur->data);
		}
		return(Min(cur->left));
}
int Max(bst_node*root)
{
	struct bst_node*p = root;
	if(root == NULL)
	{
		cout << "tree is empty "<<endl;
		return 0;
	}

		if(p->right==NULL)
		{
			return(p->data);
		}
		return(Max(p->right));

}
int main()
{
	struct bst_node *root = NULL;
	int n,x,k,data;
	cout <<"enter number of insertions"<<endl;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter an element"<<endl;
		cin >> x;
		root = insert(root,x);
	}

	cout <<"now printing the tree in preorder"<<endl;
	preorder(root);
	cout<<"now printing the tree in inorder"<<endl;
	inorder(root);
	cout<<"now printing the post order"<<endl;
	postorder(root);
    cout <<"enter the number to be searched"<<endl;
	cin >> k;
	if(search(root,k))
	{
		cout <<"number found"<<endl;
	}
	else{
		cout << "not found"<<endl;
	}
	int min = Min(root);
	cout << "mininmun element is:"<< min<<endl;
	int max = Max(root);
	cout <<"max element is:"<<max<<endl;
	cout <<"Deleting element in BST:enter the element to be deleted"<<endl;
	cin >> data;
	if(search(root,data))
    {
        root = Delete(root,data);

    }
    else
    {
        cout << "element not found"<<endl;
    }
    cout<<"now printing the tree in inorder after deleting"<<endl;
	inorder(root);
	cout<<"now printing the post order:after deleting"<<endl;
	postorder(root);
}
