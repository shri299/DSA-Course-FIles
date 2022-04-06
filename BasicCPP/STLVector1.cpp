//#include<iostream>
//#include<vector>
//
//using namespace std;
//
//int main()
//{
//	vector <int> v1;
//	vector <string> v2 { "hehe","haha","okay" };
//	vector <int> v3(4);
//	vector <int> v4 {3,10};
//	//cout << v2[0] << " " << v2[1] << " " << v2[2] << endl;
//	//for (int i = 0; i < 3; i++)
//	//{
//		//cout << v2[i] << endl;
//	//}
//
//	//functions on vectors
//	cout << v1.capacity() << endl;
//	v1.push_back(10); //pushes values in vector
//	cout << v1.capacity() << endl; //1
//	v1.push_back(20);
//	cout << v1.capacity() << endl; //2
//	v1.push_back(30);
//	cout << v1.capacity() << endl; //3
//
//	//pop back: removes last element
//	v1.pop_back();
//	cout << v1.capacity() << endl; //capacity remains same
//	cout << v1.size() << endl; //returns number of elements currently present
//
//	v1.clear(); //deletes all the elements
//	cout << v1.capacity() << " " << v1.size() << endl;
//
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	cout << v1.at(2) << endl;
//
//	cout << v1.front() << " " << v1.back() << endl;
//
//	//we can also insert value in between using iterator
//
//	vector <int>::iterator it = v1.begin();
//	v1.insert(it + 3, 35); //inserts at index 3
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << endl;
//	}
//}