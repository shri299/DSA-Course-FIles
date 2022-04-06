//#include<iostream>
//
//using namespace std;
//class B;
//class A
//{
//private:
//	int x;
//
//public:
//	void setData(int p)
//	{
//		x = p;
//	}
//	friend void fun(A, B);
//};
//
//class B
//{
//private:
//	int y;
//
//public:
//	void setData(int q)
//	{
//		y = q;
//	}
//	friend void fun(A, B);
//};
//
//void fun(A a, B b)
//{
//	cout << a.x + b.y;
//}
//
//int main()
//{
//	A a1;
//	B b1;
//	a1.setData(2);
//	b1.setData(2);
//	fun(a1, b1);
//}