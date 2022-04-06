//#include<iostream>
//#include<list>
//using namespace std;
//
//int main()
//{
//	list<int> l1, l2;
//	for (int  i = 0; i < 5; i++)
//	{
//		l1.push_back(i * 2);
//		l2.push_front(i);
//	}
//	list<int>::iterator it;
//	for (it = l1.begin();  it!=l1.end() ; it++)
//	{
//		cout << *it << " ";
//	}
//	cout <<"\n"<< l1.front() <<" " << l1.back() << endl;
//	l1.reverse();
//	for (it = l1.begin(); it != l1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	l1.sort();
//	l1.pop_back();
//	l1.pop_front();
//	for (it = l1.begin(); it != l1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	if (l1.empty())
//	{
//		cout << "List is empty";
//	}
//	else
//	{
//		cout << "List is not empty";
//	}
//	
//}