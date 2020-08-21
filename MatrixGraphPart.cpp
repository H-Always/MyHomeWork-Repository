#include "MatrixGraph.h"




void TheShortestPathBegin(MatrixGraph* G)
{
	choose choose;

	cout << "input begin vertex:" << endl;

	VertexType site_one = (VertexType)malloc(sizeof(char) * 10);
	cin >> site_one;


	int location_site_one = LocationVertex(G, site_one);

	if (location_site_one == -1)
	{
		cout << "input error ,inpout 1 go on else return" << endl;
		cin >> choose;
		if (choose == 1)
		{
			cout << "one :";
			cin >> site_one;
			int location_site_one = LocationVertex(G, site_one);

			if (location_site_one == -1)
			{
				cout << "error!" << endl;
				return;
			}

		}
		else
		{
			cout << "error!" << endl;
			return;
		}

	}
	cout << "you input one index :" << location_site_one << endl;

	dijkstra(G, location_site_one);

}


void init(int distance[MAX_SCHOOL], bool visit[MAX_SCHOOL])
{
	for (int i = 0; i < MAX_SCHOOL; i++)
	{
		visit[i] = false;
	}

	for (int i = 0; i < MAX_SCHOOL; i++)
	{
		distance[i] = 10000;
	}
}

void dijkstra(MatrixGraph* G, int index)
{
	int distance[MAX_SCHOOL];
	bool visit[MAX_SCHOOL];


	//先初始化一下，清空内存
	init(distance, visit);



	distance[index] = 0;
	for (int i = 0; i < G->vertex_count; i++)
	{
		int min_distance_vertex = 10000;
		int min_mark = 0;

		for (int j = 0; j < G->vertex_count; j++)
		{
			if (visit[j] == false && distance[j] < min_distance_vertex)
			{
				min_distance_vertex = distance[j];
				min_mark = j;
			}

		}
		visit[min_mark] = true;

		for (int k = 0; k < G->vertex_count; k++)
		{
			if (visit[k] == false && distance[k] > distance[min_mark] + G->arcs[min_mark][k])
			{
				distance[k] = distance[min_mark] + G->arcs[min_mark][k];
			}
		}



	}

	cout << endl;

	cout << "another site :";
	VertexType site_two = (VertexType)malloc(sizeof(char) * 10);
	cin >> site_two;

	int location_site_two = LocationVertex(G, site_two);

	if (location_site_two == -1)
	{
		return;
	}

	cout << "you want to go place distance :";
	cout << distance[location_site_two] << endl;


	cout << "Thank you for your using it ~ ";
	return;

}
