//#include<iostream>
//
//using namespace std;
//
//class Complex {
//private:
//	int a, b;
//
//public:
//	void setData(int x, int y)
//	{
//		a = x;
//		b = y;
//	}
//	void showData()
//	{
//		cout << a << "\n" << b<<endl;
//	}
//
//	friend void fun(Complex);
//};
//
//void fun(Complex c)
//{
//	cout << c.a + c.b;
//}
//
//int main()
//{
//	Complex c1;
//	c1.setData(2, 2);
//	c1.showData();
//	fun(c1);
//
//	cin.get();
//}