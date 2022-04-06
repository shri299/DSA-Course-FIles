//Implementation of queue using an array

//#include<iostream>
//using namespace std;
//
//int Q[10];
//int front = -1, rear = -1;
//
//bool IsEmpty()
//{
//	if (front==-1 && rear==-1)
//	{
//		return true;
//	}
//	return false;
//}
//
//void enqueue(int x)
//{
//	if (IsEmpty())
//	{
//		front = 0;
//		rear = 0;
//		Q[rear] = x;
//	}
//	else if (rear==9)
//	{
//		cout << "The queue is full" << endl;
//	}
//	else
//	{
//		rear++;
//		Q[rear] = x;
//	}
//}
//
//void dequeue()
//{
//	if (IsEmpty())
//	{
//		cout << "the queue is already empty" << endl;
//	}
//	else if (front==rear)
//	{
//		cout << "the deleted element is " << Q[front] << endl;
//	}
//	else
//	{
//		front++;
//	}
//}
//
//void print()
//{
//	if (IsEmpty())
//	{
//		cout << "queue is empty nothing to print" << endl;
//	}
//	else if (front==rear)
//	{
//		cout << Q[front] << endl;
//	}
//	else
//	{
//		for (int i = front; i <= rear; i++)
//		{
//			cout << Q[i] << " ";
//		}
//		cout << endl;
//	}
//}

//int main()
//{
//	enqueue(1);
//	print();
//	enqueue(2);
//	print();
//	enqueue(3);
//	print();
//	dequeue();
//	print();
//}