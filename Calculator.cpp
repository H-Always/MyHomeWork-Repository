#include<iostream>
#include<cstring>
#include<algorithm> 
#include<stack>
using namespace std;

//声明函数
int init_stack();

int result();

int first(const char str);

#define chartonumber(x) (x-'0')

//运算符栈 
stack<char> s1;
//中间栈
stack<char> s2;
//计算的栈,最后存放结果
stack<int> s3;




//判断优先级，算一下四则运算


int main()
{
	cout << "This is a Calculator" << endl;
	cout << "Current version support +  -  *  /  ^ (  )" << endl;
	init_stack();

	while (!s2.empty())
	{
		char c = s2.top();
		s1.push(c);
		s2.pop();
	}
	int result_stack = result();

	cout << "结果是:" << result_stack << endl;

	return 0;
}

int first(const char str)
{
	int first = -1;		//优先级 
	switch (str)
	{
	case '^':first = 2; break;
	case '*':first = 1; break;
	case '/':first = 1; break;
	case '+':first = 0; break;
	case '-':first = 0; break;
	}
	return first;

}



int init_stack()
{
	//读取字符串 
	cout << "please input a expression , use space a newline , \"#\" is over" << endl;

	char num;

	for (int i = 0; i < 100; i++)
	{
		cin >> num;
		if (num == '#')
			break;
		if (num >= '0' && num <= '9')
		{		//如果是数字，直接压入s2 
			s2.push(num);
		}
		else if (num == '+' || num == '-' || num == '*' || num == '/')
		{	//如果是运算符 
			while (true)
			{
				if (s1.empty() || s1.top() == '(')
				{		//s1为空 ，或者栈顶为( 
					s1.push(num);
					break;
				}
				else if (first(num) > first(s1.top()))
				{		//当前运算符优先级大于s1栈顶运算符优先级 
					s1.push(num);
					break;
				}
				else
				{//小于等于优先级的话
					char temp = s1.top();
					s1.pop();
					s2.push(temp);
				}
			}
		}
		else if (num == '^')
		{
			s1.push(num);
		}
		else {
			if (num == '(')
			{	//直接读入 
				s1.push(num);
			}
			else
			{
				while (s1.top() != '(')
				{
					char temp = s1.top();
					s1.pop();
					s2.push(temp);
				}
				s1.pop();
			}
		}
	}
	while (!s1.empty()) {
		char temp = s1.top();
		s2.push(temp);
		s1.pop();
	}
	return 0;
}


int result()
{

	while (!s1.empty())
	{
		char temp;
		int tem;
		int x, y;
		int res;

		if (s1.top() == '+' || s1.top() == '-' || s1.top() == '*' || s1.top() == '/' || s1.top() == '^')
		{
			temp = s1.top();
			s1.pop();

			x = s3.top();
			s3.pop();

			y = s3.top();
			s3.pop();

			switch (temp)
			{
			case '+':
				res = y + x;
				s3.push(res);
				break;
			case '-':
				res = y - x;
				s3.push(res);
				break;
			case '*':
				res = y * x;
				s3.push(res);
				break;
			case '/':
				res = y / x;
				s3.push(res);
				break;
			case '^':
				res = pow(y, x);
				s3.push(res);
				break;
			default:
				cout << "input is error or not legal" << endl;
				break;

			}
		}
		else
		{
			tem = chartonumber(s1.top());

			s1.pop();

			s3.push(tem);

		}


	}

	return s3.top();

}


