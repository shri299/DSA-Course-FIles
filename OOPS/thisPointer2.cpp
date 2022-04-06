#include<iostream>

using namespace std;

class Box
{
	int l, b, h;

public:
	void setDimension(int l, int b, int h)
	{
		this->l = l;
		this->b = b;
		this->h = h;
	}
	void showData()
	{
		cout << l << " " << b << " " << h;
	}
};

int main()
{
	Box box;
	box.setDimension(12, 10, 5);
	box.showData();
}