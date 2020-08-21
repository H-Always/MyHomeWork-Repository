#include <iostream>
#include <queue>
#include <string>

#define MAX_SIZE 10


using namespace std;


//ʳ�ö��У�����չ(Ӧ�ÿ���)
queue<int> queue_eat[3];


void initqueue(int, int, int, int);

bool eat(int&, int&, int&, int windows_speed_1 = 1, int windows_speed_2 = 2, int windows_speed_3 = 3);

void visual(int q1, int q2, int q3);

int main()
{

	cout << "How many people do you want to dining hall" << endl;
	int temp = 0;

	//������ʳ�õĳ�ʼ����
	int people_num;
	cin >> people_num;

	if (people_num <= 0)
	{
		cout << "no people!" << endl;
		return 0;
	}

	cout << "Now we have " << people_num << " cilent" << endl;


	//���崰�ڼ��ٶ�
	int windows_speed_1 = 1;
	int windows_speed_2 = 2;
	int windows_speed_3 = 3;

	//ÿ��������ɺ������
	int q1 = 0;
	int q2 = 0;
	int q3 = 0;


	//��Ԥ�ȷ���õĽ������
	initqueue(people_num, windows_speed_1, windows_speed_2, windows_speed_3);


	//���ú�������ʳ�þͲ�
	eat(q1, q2, q3, windows_speed_1, windows_speed_2, windows_speed_3);

	return 0;
}


//��ʼ��ȫ������
void initqueue(int people_num, int windows_speed_1, int windows_speed_2, int windows_speed_3)
{


	//ƽ���ֵ�ÿ����ʼ���õĶ���
	int people_average = people_num / 3;


	//ʣ������
	int remain = people_num - people_average * 3;


	for (int i = 0; i < people_average + remain; i++)
	{
		queue_eat[0].push(1);
	}

	for (int i = 0; i < people_average; i++)
	{
		queue_eat[1].push(1);
	}

	for (int i = 0; i < people_average; i++)
	{
		queue_eat[2].push(1);
	}

	cout << "Current queue" << endl;
	visual(people_average + remain, people_average, people_average);

}

//ʳ�þͲ�
bool eat(int& q1, int& q2, int& q3, int windows_speed_1, int windows_speed_2, int windows_speed_3)
{


	while (1)
	{

		//��һ��
		if (queue_eat[0].size() - windows_speed_1 <= 0 || queue_eat[0].empty() == false)
		{

			for (int i = 0; i < windows_speed_1; i++)
			{
				if (!queue_eat[0].empty())
				{
					queue_eat[0].pop();
					q1++;
				}

			}

		}



		if (queue_eat[1].size() - windows_speed_2 <= 0 || queue_eat[1].empty() == false)
		{
			for (int i = 0; i < windows_speed_2; i++)
			{
				if (!queue_eat[1].empty())
				{
					queue_eat[1].pop();
					q2++;
				}

			}


		}

		//������
		if (queue_eat[2].size() - windows_speed_3 <= 0 || queue_eat[2].empty() == false)
		{
			for (int i = 0; i < windows_speed_3; i++)
			{
				if (!queue_eat[2].empty())
				{
					queue_eat[2].pop();
					q3++;
				}

			}
		}

		//��ʳû�˵�ʱ����������
		if (queue_eat[0].size() == 0 && queue_eat[1].size() == 0 && queue_eat[2].size() == 0)
		{
			break;
		}


		//ÿһ��ѭ����ɣ������Ŷӣ�������Ѷ���
		while (queue_eat[0].size() >= queue_eat[1].size())
		{

			while (queue_eat[0].size() >= queue_eat[1].size())
			{
				if (!queue_eat[0].empty())
				{
					queue_eat[1].push(queue_eat[0].front());
					queue_eat[0].pop();
				}
				else
				{
					break;
				}
			}

			while (queue_eat[1].size() >= queue_eat[2].size())
			{
				if (!queue_eat[1].empty())
				{
					queue_eat[2].push(queue_eat[1].front());
					queue_eat[1].pop();
				}
				else
				{
					break;
				}
			}

		}


	}

	cout << "Optimal queue" << endl;
	visual(q1, q2, q3);

	return true;

}


//���ӻ���ӡÿһ������
void visual(int q1, int q2, int q3)
{

	cout << "The first queue  :";
	for (int i = 0; i < q1; i++)
	{
		cout << "��";
	}

	cout << endl;
	cout << "The second queue :";
	for (int i = 0; i < q2; i++)
	{
		cout << "��";
	}

	cout << endl;
	cout << "The third queue  :";
	for (int i = 0; i < q3; i++)
	{
		cout << "��";
	}
	cout << endl;
	cout << "time spend is " << q1 << endl;
}


