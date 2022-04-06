//find the lenght of linked list

//#include<iostream>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* next;
//};
//Node* head;
//
//void insert(int x)
//{
//	Node* temp = new Node();
//	if (head==NULL)
//	{
//		temp->data = x;
//		temp->next = head;
//		head = temp;
//	}
//	else
//	{
//		temp->data = x;
//		temp->next = head;
//		head = temp;
//	}
//}
//
//void print()
//{
//	Node* temp=head;
//	int count = 0;
//	while (temp!=NULL)
//	{
//		cout << temp->data << " ";
//		temp = temp->next;
//		count++;
//	}
//	cout << " the number of elements in linked list are " << count << endl;
//}
//
//int main()
//{
//	head = NULL;
//	int x, n;
//	cout << "enter the number of elements" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "enter the element" << endl;
//		cin >> x;
//		insert(x);
//	}
//	print();
//
//}