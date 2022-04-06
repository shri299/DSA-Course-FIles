//Find height of a binary tree

//#include<iostream>
//using namespace std;
//
//struct Node {
//	int data;
//	Node* right;
//	Node* left;
//};
//
//int FindHieght(Node* root)
//{
//	if (root==NULL)
//	{
//		return -1;
//	}
//	return max(FindHieght(root->left), FindHieght(root->right)) + 1;
//}