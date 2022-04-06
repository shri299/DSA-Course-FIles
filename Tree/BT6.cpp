//check for balanced binary tree

//#include<iostream>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* left;
//	Node* right;
//	Node( int x )
//	{
//		data = x;
//		left = NULL;
//		right = NULL;
//	}
//};
//
//int maxDepth(Node* root) {
//	if (root == NULL)
//		return 0;
//	int lh = maxDepth(root->left);
//	int rh = maxDepth(root->right);
// 
//  if(lh==-1 || rh == -1)
//		return -1;
//  if(abs(lh-rh)>1)
//		return -1
//
//	return 1 + max(lh, rh);
//}