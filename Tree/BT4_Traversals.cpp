////Iterative method for preorder traversal
//
//#include<iostream>
//#include<stack>
//using namespace std;
//
//struct Node {
//	int data;
//	Node* left;
//	Node* right;
//
//	Node(int x) {
//		data = x;
//		left = NULL;
//		right = NULL;
//	}
//};
//
////void preorder(Node* root)
////{
////	stack<Node*> s;
////	s.push(root);
////	while (!s.empty())
////	{
////		Node* current = s.top();
////		cout << current->data << " ";
////		s.pop();
////		if (current->right!=NULL)
////		{
////			s.push(current->right);
////		}
////		if (current->left != NULL)
////		{
////			s.push(current->left);
////		}
////	}
////}
//
////void inorder(Node* root)
////{
////	stack<Node*> s;
////	s.push(root);
////	Node* current = s.top();
////	while (true)
////	{
////		if (current != NULL)
////		{
////			s.push(current->left);
////			current = s.top();
////		}
////		if (current==NULL)
////		{
////			if (s.empty())
////			{
////				break;
////			}
////			cout << s.top()->data << " ";
////			current = s.top()->right;
////			s.pop();
////			
////		}
////	}
////}
//
////postorder using two stacks
//
//void postorder(Node* root)
//{
//	stack<Node*> s1;
//	stack<Node*> s2;
//	s1.push(root);
//	Node* current;
//	while (!s1.empty())
//	{
//		
//		
//		current = s1.top();
//		s2.push(current);
//		s1.pop();
//		if (current->left!=NULL)
//		{
//			s1.push(current->left);
//		}
//		if (current->right != NULL)
//		{
//			s1.push(current->right);
//		}
//		
//	}
//	while (!s2.empty())
//	{
//		cout << s2.top()->data << " ";
//		s2.pop();
//	}
//}
//
//
//int main()
//{
//	Node* root = new Node(1);
//	root->right = new Node(7);
//	root->left = new Node(2);
//	root->left->left = new Node(3);
//	root->left->right = new Node(4);
//	root->left->right->left = new Node(5);
//	root->left->right->right = new Node(6);
//	//preorder(root);
//	//inorder(root);
//	postorder(root);
//}