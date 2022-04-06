//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cout << "enter size of array" << endl;
//	cin >> n;
//	int* A =(int*) malloc(n * sizeof(int));
//
//	/*int* A = (int*)calloc(n , sizeof(int));*/
//
//	cout << "Enter array values" << endl;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> A[i];
//	}
//
//	/*free(A);*/
//
//	/*int* B = (int*)realloc(A, 2 * n * sizeof(int));*/
//
//	/*int* B = (int*)realloc(A, (n/2)* sizeof(int));*/
//
//	//int* B = (int*)realloc(A,0);  //complete block will be deallocated and this statement is equivalent to free(A)
//
//	int* B = (int*)realloc(NULL, sizeof(int)); //this means we are creating and new block and is equivalent to malloc
//
//	cout << A << endl << B << endl;
//
//	cout << "Array elements are" << endl;
//
//	
//	/*for (int i = 0; i < n; i++)
//	{
//		cout << A[i] << endl;
//	}*/
//
//	for (int i = 0; i <2* n; i++)
//	{
//		cout << A[i] << endl;
//	}
//}