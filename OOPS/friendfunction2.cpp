//#include<iostream>
//
//using namespace std;
//
//class Complex
//{
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
//		cout << a << "\n" << b;
//	}
//
//	friend Complex operator+(Complex, Complex);
//};
//
//Complex operator+(Complex c, Complex cc)
//{
//	Complex temp;
//	temp.a = c.a + cc.a;
//	temp.b = c.b + cc.b;
//	return temp;
//}
//
//
//int main()
//{
//	Complex c1, c2, c3;
//
//	c1.setData(2, 3);
//	c2.setData(6, 5);
//
//	c3 = c1 + c2;
//
//	c3.showData();
//
//
//}