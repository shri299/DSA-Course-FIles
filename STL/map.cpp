//Maps are associative containers that store elements in a mapped fashion. 
// Each element has a key value and a mapped value. 
//No two mapped values can have the same key values.
//Implemented Internally using red black tree
//we cant do itr+1 or itr+ n because the pair values are not stored in contigous location. The are just linked with each other.
//but we can use itr++

//#include<iostream>
//#include<map>
//using namespace std;
//
//int main()
//{
//	map<int, int>m;
//	for (int i = 1; i <= 10; i++)
//	{
//		m.insert(pair<int, int>(i, i * 2));
//	}
//	map<int, int>::iterator itr;
//	for (itr = m.begin(); itr != m.end(); itr++)
//	{
//		cout << itr->first << " " << itr->second << endl;
//	}
//
//	cout << endl;
//
//	//map<int, int>mm(m.begin(), m.end());
//	m.erase(m.begin(), m.find(3));
//
//	for (itr = m.begin(); itr != m.end(); itr++)
//	{
//		cout << itr->first << " " << itr->second << endl;
//	}
//
//	cout << endl;
//
//	m.erase(5);
//
//	for (itr = m.begin(); itr != m.end(); itr++)
//	{
//		cout << itr->first << " " << itr->second << endl;
//	}
//
//	cout << endl;
//
//	//m.erase(m.find(8), m.end());
//	m.erase(m.find(8), m.find(10));
//
//	for (itr = m.begin(); itr != m.end(); itr++)
//	{
//		cout << itr->first << " " << itr->second << endl;
//	}
//
//	cout << endl;
//
//	//m.clear();
//
//	cout << "Size of map " << m.size() << endl;
//
//	if (m.empty())
//	{
//		cout << "Map is Empty" << endl;
//	}
//	else
//	{
//		cout << "Map is not empty" << endl;
//	}
//
//	
//}