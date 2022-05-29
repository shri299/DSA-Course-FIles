//Improved method for linear search

//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//using namespace std;
//
//void linearSearch(vector<int> arr, int search_element)
//{
//	int left = 0;
//	int position = -1;
//	int lenght = arr.size();
//	int right = lenght - 1;
//	for (left=0;left<=right;)
//	{
//		if (arr[left]==search_element)
//		{
//			position = left;
//			cout << "Element found at position " << position + 1 << " in " << left + 1 << " attempts";
//			break;
//		}
//		if (arr[right] == search_element)
//		{
//			position = right;
//			cout << "Element found at position " << position + 1 << " in " << lenght-right << " attempts";
//			break;
//		}
//		left++;
//		right--;
//	}
//	if (position==-1)
//	{
//		cout << "element not present in array";
//	}
//}
//
//int main()
//{
//	vector<int> arr{ 1,2,3,4,5,6 };
//	int search_element;
//	cin >> search_element;
//
//	linearSearch(arr, search_element);
//}