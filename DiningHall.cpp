#include <iostream>
#include <queue>
#include <string>

#define MAX_SIZE 10


using namespace std;


//食堂队列，可扩展(应该可以)
queue<int> queue_eat[3];


void initqueue(int, int, int, int);

bool eat(int&, int&, int&, int windows_speed_1 = 1, int windows_speed_2 = 2, int windows_speed_3 = 3);

void visual(int q1, int q2, int q3);

int main()
{

	cout << "How many people do you want to dining hall" << endl;
	int temp = 0;

	//定义在食堂的初始人数
	int people_num;
	cin >> people_num;

	if (people_num <= 0)
	{
		cout << "no people!" << endl;
		return 0;
	}

	cout << "Now we have " << people_num << " cilent" << endl;


	//定义窗口及速度
	int windows_speed_1 = 1;
	int windows_speed_2 = 2;
	int windows_speed_3 = 3;

	//每个队列完成后的人数
	int q1 = 0;
	int q2 = 0;
	int q3 = 0;


	//把预先分配好的进行入队
	initqueue(people_num, windows_speed_1, windows_speed_2, windows_speed_3);


	//调用函数进行食堂就餐
	eat(q1, q2, q3, windows_speed_1, windows_speed_2, windows_speed_3);

	return 0;
}


//初始化全部队列
void initqueue(int people_num, int windows_speed_1, int windows_speed_2, int windows_speed_3)
{


	//平均分到每个初始化好的队列
	int people_average = people_num / 3;


	//剩余人数
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

//食堂就餐
bool eat(int& q1, int& q2, int& q3, int windows_speed_1, int windows_speed_2, int windows_speed_3)
{


	while (1)
	{

		//第一队
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

		//第三队
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

		//当食没人的时候跳出程序
		if (queue_eat[0].size() == 0 && queue_eat[1].size() == 0 && queue_eat[2].size() == 0)
		{
			break;
		}


		//每一次循环完成，重新排队，整理最佳队列
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


//可视化打印每一个队列
void visual(int q1, int q2, int q3)
{

	cout << "The first queue  :";
	for (int i = 0; i < q1; i++)
	{
		cout << "■";
	}

	cout << endl;
	cout << "The second queue :";
	for (int i = 0; i < q2; i++)
	{
		cout << "■";
	}

	cout << endl;
	cout << "The third queue  :";
	for (int i = 0; i < q3; i++)
	{
		cout << "■";
	}
	cout << endl;
	cout << "time spend is " << q1 << endl;
}


