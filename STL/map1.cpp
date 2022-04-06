//#include<iostream>
//#include<map>
//using namespace std;
//
//int main()
//{
//	map<int, int> marks;
//	//if we insert using the below rule and dont assign value to key, the value will be by default either empty string or zero depending upon its data type
//	//even just writing m[12] will take logn time
//	//keys are always unique
//	//ye jo insertion ka time hota hai vo key ke uppar bhi depend krta hai
//	//for long string key: TC: string.size() * log(n)
//	marks[23] = 98; //O(log(n))
//	marks[12] = 100;
//	marks[54] = 43;
//	marks[22] = 67;
//
//	map<int, int> ::iterator itr;
//	for (itr = marks.begin(); itr != marks.end(); itr++)
//	{
//		cout << itr->first << " " << itr->second<<endl;
//	}
//	//outputs in sorted order based on the key
//	//if the keys are string theyll be sorted in lexicographical order
//	//we can also print this using following syntax
//	//access time comp will be logn
//	//so for n elements will be nlogn
//	for (auto& pr : marks)
//	{
//		cout << pr.first << " " << pr.second << endl;
//	
//	}
//
//	//the find function return iterator on for that key.
//	//and if no such key is found it returnd end() iterator.
//	auto it = marks.find(12); //TC of find is logn
//	if (it==marks.end())
//	{
//		cout << "Element not found" << endl;
//	}
//	else
//	{
//		cout << "Element is found and has value of "<<it->second << endl;
//	}
//
//	//erase
//	//there is nothing at m.end() hence it will give segmentation fault
//	//tc: logn
//	marks.erase(it);
//	//marks(itr1, itr2);
//	//marks(value of key);
//	
//}