#include<iostream>
#include<list>

using namespace std;

int main()
{
	list <int> l1;
	list <int> l2{ 1,2,3,4,5 };

	//cant use square braces to access values l2[1]
	//l2.push_back(6); //insert 6 at last if list
	//l2.push_front(0); //insert at first of list
	l2.pop_back();
	l2.pop_front();
	list <int>::iterator it = l2.begin(); //it is a pointer, having address of 1st element of l2
	while (it!=l2.end())
	{
		cout << *it <<" ";
		it++;
	}
	cout <<endl<< l2.size() << endl;

}