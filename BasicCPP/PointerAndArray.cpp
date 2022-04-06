//#include<iostream>
//using namespace std;
//int main()
//{
//	int A[] = {1,2,3,4,5};
//
//	
//
//	cout << A << endl;//prints the base address of array
//	cout << *A << endl;
//	cout << sizeof(A) << endl;
//
//	for (int i = 0; i <5; i++)
//	{
//
//		cout << *(A + i) << endl;
//
//	}
//
//	int* p;
//
//	p = A;
//
//	cout << p << endl; //prints the base address of array
//}


//passing array as argument in a function
//consider below example of adding all elements of an interger array

//int sumelements(int a[],int n)
//     //the compiler converts int a[] to int* a (pointer to integer array)
//{
//	int i, sum = 0;
//
//	//int size = sizeof(a) / sizeof(a[0]); //when we write the statement here we get sum as one
//
//	cout << sizeof(a) << endl << sizeof(a[0]) << endl; //output is 4,4. this happens because the complete array is not passed only base address is passed and the address is of int type so the size of a will be 4
//
//	for (i = 0; i < n; i++)
//	{
//		//cout << *(a + i) << endl;
//		sum = sum + a[i];  //a[i] is *(a+i)
//	
//	}
//
//	return sum;
//
//	
//}
//
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//
//	int size = sizeof(a) / sizeof(a[0]);  //when we write the statement in amin we get output as 15
//
//	cout << sizeof(a) << endl << sizeof(a[0]) << endl; //output is 20,4
//
//	int result = sumelements(a,size);
//
//	cout << result << endl;
//	
//}



