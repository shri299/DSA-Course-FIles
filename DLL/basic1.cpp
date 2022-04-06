//Inserting at the beginning in DLL

#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
	Node* prev;
};
Node* head;

void insert(int x)
{
	Node* temp = new Node();
	temp->data = x;
	if (head==NULL)
	{
		temp->prev = NULL;
		temp->next = NULL;
		head = temp;
	}
	else
	{
		temp->prev = NULL;
		temp->next = head;
		head->prev = temp;
		head = temp;
	}
}

void print()
{
	Node* temp;
	temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

int main()
{
	head = NULL;
	int n, x;
	cout << "Enter the number of elements to be inserted" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the " << i + 1 << "th element" << endl;
		cin >> x;
		insert(x);
	}
	print();
}