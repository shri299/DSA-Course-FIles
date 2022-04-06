//check whether parenthesis is balanced or not

//#include<iostream>
//#include<stack>
//using namespace std;
//
//void checkBalancedParenthesis(char c[], int n)
//{
//	stack<char> s;
//	for (int i = 0; i < n; i++)
//	{
//		if (c[i] == '(' || c[i] == '{' || c[i] == '[')
//		{
//			s.push(c[i]);
//		}
//		else if(c[i] == ')' || c[i] == '}' || c[i] == ']')
//		{
//			if (!s.empty() || c[i]!=s.top())
//			{
//				cout << "The parenthesis are not balanced" << endl;
//				return;
//			}
//			else
//			{
//				s.pop();
//			}
//		}
//		else
//		{
//			continue;
//		}
//	}
//	if (s.empty())
//	{
//		cout << "The parenthesis are not balanced" << endl;
//	}
//	else
//	{
//		cout << "The parenthesis are balanced" << endl;
//	}
//}
//
//int main()
//{
//	char c[30];
//	cout << "Enter the expression" << endl;
//	cin >> c;
//	int n = strlen(c);
//	checkBalancedParenthesis(c, n);
//}