//basic insertion and deletion practice :-)

//#include<iostream>
//using namespace std;
//
//struct Node {
//	int data;
//	Node* link;
//};
//Node* head;
//
//void Insert(int x)
//{
//	Node* temp=new Node();
//	if (head==NULL)
//	{
//		head = temp;
//		temp->data = x;
//		temp->link = NULL;
//	}
//	else
//	{
//		temp->data = x;
//		temp->link = head;
//		head = temp;
//	}
//}
//
//void print()
//{
//	Node* temp;
//	temp = head;
//	while (temp!=NULL)
//	{
//		cout << temp->data<<" ";
//		temp = temp->link;
//	}
//}
//
//int main()
//{
//	head = NULL;
//	Insert(1);
//	Insert(2);
//	Insert(3);
//	print();
//}