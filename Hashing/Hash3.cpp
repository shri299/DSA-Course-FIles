//Find whether an array is subset of another array
//Method 1(Brute Force)

//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	int arr1[] = { 11,5,34,8,55,23,63,21 };
//	int arr2[] = { 55,34,21,45 };
//	int count = 4;
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if (arr1[i]==arr2[j])
//			{
//				count--;
//			}
//		}
//	}
//	if (count==0)
//	{
//		cout << "It is a subset";
//	}
//	else
//	{
//		cout << "Not a subset";
//	}
//}

//Method 2 - Binary Search (O(nlogn) bcz of unsorted array we need to apply quick sort)

//void checksubset(int a[], int b[], int m, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (!binarySearch(a, 0, m-1, b[i]))
//		{
//			cout << "Not a subset";
//			exit(0);
//		}
//	}
//	cout << "Is a subset";
//}
//
//int binarySearch(int a[],int low, int high,int x)
//{
//	if (low>high)
//	{
//		return -1;
//	}
//	int mid = (low + high) / 2;
//	if (x==a[mid])
//	{
//		return 1;
//	}
//	else if (x<a[mid])
//	{
//		binarySearch(a, low, mid - 1, x);
//	}
//	else
//	{
//		binarySearch(a, mid + 1, high, x);
//	}
//	return -1;
//}
//
//int main()
//{
//	int a[] = { 11,1,13,21,3,7 };
//	int b[] = { 11,3,7,1 };
//	int m = 6, n = 4;
//	sort(a, a + m);
//	sort(b, b + n);
//	checksubset(a, b, m, n);
//}
