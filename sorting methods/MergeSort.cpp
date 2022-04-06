//#include<iostream>
//
//using namespace std;
//
//void Merge(int left[], int L, int right[], int R, int A[])
//{
//	int i = 0, j = 0, k = 0;
//	while (i<L && j<R)
//	{
//		if (left[i] <= right[j])
//		{
//			A[k] = left[i];
//			k++;
//			i++;
//		}
//		else
//		{
//			A[k] = right[j];
//			k++;
//			j++;
//		}
//	}
//
//	while (i<L)
//	{
//		A[k] = left[i];
//		i++;
//		k++;
//	}
//	while (j < R)
//	{
//		A[k] = right[j];
//		j++;
//		k++;
//	}
//}
//
//void divideArray(int A[],int n)
//{
//	if (n<2)
//	{
//		return;
//	}
//	int mid = n / 2;
//	int left[50], right[50];
//	for (int i = 0; i < mid; i++)
//	{
//		left[i] = A[i];
//	}
//	int m = 0;
//	for (int i = mid; i <n; i++)
//	{
//		right[m] = A[i];
//		m++;
//	}
//	int lenL = mid;
//	int lenR = n-mid;
//	divideArray(left,lenL);
//	divideArray(right,lenR);
//
//	Merge(left, lenL, right, lenR, A);
//}
//
//int main()
//{
//	int A[] = { 4,2,6,8,12,3 };
//	int n = sizeof(A) / sizeof(A[0]);
//	divideArray(A,n);
//	for (int i = 0; i < n; i++)
//	{
//		cout << A[i] << " ";
//	}
//}