#include<iostream>
#include<cstring>
#include<algorithm> 
#include<stack>
using namespace std;

//��������
int init_stack();

int result();

int first(const char str);

#define chartonumber(x) (x-'0')

//�����ջ 
stack<char> s1;
//�м�ջ
stack<char> s2;
//�����ջ,����Ž��
stack<int> s3;




//�ж����ȼ�����һ����������


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

	cout << "�����:" << result_stack << endl;

	return 0;
}

int first(const char str)
{
	int first = -1;		//���ȼ� 
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
	//��ȡ�ַ��� 
	cout << "please input a expression , use space a newline , \"#\" is over" << endl;

	char num;

	for (int i = 0; i < 100; i++)
	{
		cin >> num;
		if (num == '#')
			break;
		if (num >= '0' && num <= '9')
		{		//��������֣�ֱ��ѹ��s2 
			s2.push(num);
		}
		else if (num == '+' || num == '-' || num == '*' || num == '/')
		{	//���������� 
			while (true)
			{
				if (s1.empty() || s1.top() == '(')
				{		//s1Ϊ�� ������ջ��Ϊ( 
					s1.push(num);
					break;
				}
				else if (first(num) > first(s1.top()))
				{		//��ǰ��������ȼ�����s1ջ����������ȼ� 
					s1.push(num);
					break;
				}
				else
				{//С�ڵ������ȼ��Ļ�
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
			{	//ֱ�Ӷ��� 
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


