//#include<iostream>
//
//using namespace std;
//
//void min(int arr[], int n)
//{
//	int res1,t;
//	int temp;
//	res1 = arr[0];
//	for (int j = 0; j < n-1; j++)
//	{
//		for (int i = j+1; i < n; i++)
//		{
//			if (res1 > arr[i])
//			{
//				res1 = arr[i];
//				t = i;
//			}
//		}
//		temp = arr[j];
//		arr[j] = arr[t];
//		arr[t] = temp;
//		res1 = arr[j + 1];
//
//	}
//}
//
//int main()
//{
//	int arr[30], n;
//	cout << "Enter value of n" << endl;
//	cin >> n;
//	cout << "Enter elements of array" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	min(arr, n);
//	cout << "Elements of array are" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i];
//	}
//}