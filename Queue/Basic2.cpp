//linked list implementation of queue
//dequeue(front) from start
//enqueue(rear) from end

//#include<iostream>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* next;
//};
//Node* front = NULL;
//Node* rear = NULL;
//
//void enqueue(int x)
//{
//	Node* temp = new Node();
//	temp->data = x;
//	temp->next = NULL;
//	if (front==NULL && rear==NULL)
//	{
//		front = temp;
//		rear = temp;
//		return;
//	}
//	rear->next = temp;
//	rear = temp;
//}
//
//void dequeue()
//{
//	Node* temp = front;
//	if (front==NULL)
//	{
//		cout << "empty queue" << endl;
//		return;
//	}
//	if (front==rear)
//	{
//		front == NULL;
//		rear == NULL;
//	}
//	else
//	{
//		front = front->next;
//	}
//	free(temp);
//}
