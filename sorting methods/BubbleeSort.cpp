//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int arr[] = {43,2,3,87,45 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	int temp,flag=0;
//
//	for (int i = 0; i <n-1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;
//			}
//		}
//		if (flag==0)
//		{
//			break;
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}