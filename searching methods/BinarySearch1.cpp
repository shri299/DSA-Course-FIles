//Implementation

//Iterative Method

//int BinarySearch(int a[], int n, int x)
//{
//	int start = 0;
//	int end = n - 1;
//	int mid;
//	while (start<=end)
//	{
//		mid = start + (end-start)/2;
//		if (x==a[mid])
//		{
//			return mid;
//		}
//		else if (x < a[mid])
//		{
//			end = mid - 1;
//		}
//		else
//		{
//			start = mid + 1;
//		}
//	}
//	return -1;
//}

//Recursive method

//int BinarySearch(int a[],int x,int start, int end)
//{
//	int mid;
//	
//		mid = start + (end - start) / 2;
//		if (start>end)
//		{
//			return -1;
//		}
//		if (x == a[mid])
//		{
//			return mid;
//		}
//		else if (x < a[mid])
//		{
//			BinarySearch(a, x, start, mid - 1);
//		}
//		else
//		{
//			BinarySearch(a, x, mid + 1, end);
//		}
//
//	return -1;
//}