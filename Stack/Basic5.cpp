//reverse a linked list using stack 

//#include<iostream>
//#include<stack>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* next;
//};
//Node* head;
//
//void Insert(int x)
//{
//	Node* temp = new Node();
//	temp->data = x;
//	temp->next = head;
//	head = temp;
//}
//
//void print()
//{
//	Node* temp = head;
//	while (temp!=NULL)
//	{
//		cout << temp->data << " ";
//		temp = temp->next;
//	}
//	cout << endl;
//}
//
//void Reverse()
//{
//	if (head==NULL)
//	{
//		cout << "The list is empty" << endl;
//	}
//	//push all the addresses to stack
//	stack<Node*>s;
//	Node* temp = head;
//	while (temp!=NULL)
//	{
//		s.push(temp);
//		temp = temp->next;
//	}
//	//now pop and reverse linked list in reverse order
//	head = s.top();
//	s.pop();
//	Node* temp1 = head;
//	while (!s.empty())
//	{
//		temp1->next = s.top();
//		s.pop();
//		temp1 = temp1->next;
//	}
//	temp1->next = NULL;
//}
//
//int main()
//{
//	head = NULL;
//	int n, x;
//	cout << "Enter the number of elements to be inserted" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x;
//		Insert(x);
//	}
//	cout << "The linked list in actual order is" << endl;
//	print();
//	cout << "The linked list in reverse order is" << endl;
//	Reverse();
//	print();
//}