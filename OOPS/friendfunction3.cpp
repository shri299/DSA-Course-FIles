//#include<iostream>
//using namespace std;
//
//class Negate
//{
//private:
//	int a;
//
//public:
//
//	void setData(int x)
//	{
//		a = x;
//	}
//
//	void showData()
//	{
//		cout << a;
//	}
//
//	friend Negate operator-(Negate);
//};
//
//Negate operator-(Negate n)
//{
//	Negate temp;
//	temp.a = -n.a;
//	return temp;
//}
//
//int main()
//{
//	Negate n1, n2;
//	n1.setData(6);
//
//	n2 = -n1;
//
//	n2.showData();
//}