//Implementation of BST using dynamically allocated nodes

//#include<iostream>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* left;
//	Node* right;
//};
//
//
//Node* GetNewNode(int data)
//{
//	Node* newNode = new Node();
//	newNode->data = data;
//	newNode->left = NULL;
//	newNode->right = NULL;
//	return newNode;
//}
//
//Node* Insert(Node* root,int data)
//{
//	if (root == NULL)
//	{
//		root = GetNewNode(data);
//		return root;
//	}
//	else if (data<=root->data)
//	{
//		root->left = Insert(root->left, data);
//		return root;
//	}
//	else
//	{
//		root->right = Insert(root->right, data);
//		return root;
//	}
//}
//bool search(Node* root, int data)
//{
//	if (root==NULL)
//	{
//		return false;
//	}
//	else if(root->data==data)
//	{
//		return true;
//	}
//	else if (data<=root->data)
//	{
//		return search(root->left, data);
//	}
//	else
//	{
//		return search(root->right, data);
//	}
//}
//int main()
//{
//	Node* root;
//	root = NULL;
//	root=Insert(root,12);
//	root=Insert(root,11);
//	root=Insert(root,13);
//	root = Insert(root, 10);
//	root = Insert(root, 14);
//	root = Insert(root, 9);
//	root = Insert(root, 15);
//	if (search(root,9))
//	{
//		cout << "found" << endl;
//	}
//	else
//	{
//		cout << "Not found";
//	}
//}