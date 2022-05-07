//Read theory from GFG
//O(1) pushback complexity : inserts at end of vector
//0(1) v.size()


//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	vector <int> g1;
//	for (int i = 0; i <6; i++)
//	{
//		g1.push_back(i);
//	}
//	cout << g1.size()<<endl;
//	for (auto i = g1.begin(); i != g1.end(); i++)
//	{
//		cout << *i << " ";
//	}
//	cout << endl;
//	for (auto i = g1.rbegin(); i != g1.rend(); i++)
//	{
//		cout << *i << " ";
//	}
//	cout << endl;
//
//	cout << g1.max_size() << " ";
//	cout << g1.capacity() << " ";
//
//	if (g1.empty())
//	{
//		cout << "The vector is empty";
//	}
//	else
//	{
//		cout << "Vector is not empty";
//	}
//
//	//accessing the element
//	cout << g1[2] << " " << g1.at(2) << " " << g1.front();
//	cout << g1.back()<<endl;
//
//	vector<int> v;
//	v.assign(5, 10);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	v.push_back(20);
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << " ";
//	}
//	v.pop_back();
//}