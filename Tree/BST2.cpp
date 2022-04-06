//Find min and max element in a binary search tree

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
//int FindMin(Node* root)
//{
//	if (root==NULL)
//	{
//		cout << "Empty tree" << endl;
//		return - 1;
//	}
//	Node* current = root;
//	while (current->left!=NULL)
//	{
//		current = current->left;
//	}
//	return current->data;
//}
//
//int FindMax(Node* root)
//{
//	if (root == NULL)
//	{
//		cout << "Empty tree" << endl;
//		return -1;
//	}
//	Node* current = root;
//	while (current->right != NULL)
//	{
//		current = current->right;
//	}
//	return current->data;
//}
//
////using reccursion
//
//int FindMinn(Node* root)
//{
//	if (root==NULL)
//	{
//		cout << "empty tree" << endl;
//		return -1;
//	}
//	else if (root->left==NULL)
//	{
//		return root->data;
//	}
//	return FindMinn(root->left);
//}