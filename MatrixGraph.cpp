#include "MatrixGraph.h"

int CreateUDG(MatrixGraph* G)
{

	//图的种类
	G->kind = undirected_graph;


	cout << "please input vertex count" << endl;
	cin >> G->vertex_count;
	if (cin.good() != 1)
	{
		cout << "incorrect input" << endl;
		return ERROR;
	}

	cout << "please input arc count" << endl;
	cin >> G->arc_count;
	if (cin.good() != 1)
	{
		cout << "incorrect input" << endl;
		return ERROR;
	}

	for (int i = 0; i < G->vertex_count; i++)
	{
		G->vertexs[i] = (VertexType)malloc(sizeof(char) * 20);
		cout << "vertex " << i + 1 << " :" << endl;
		cin >> G->vertexs[i];
	}

	//初始化邻接矩阵，所有权值设置为0
	for (int i = 0; i < G->vertex_count; i++)
		for (int j = 0; j < G->vertex_count; j++)
		{
			if (i == j)
			{
				G->arcs[i][j] = 0;
			}
			else
			{
				G->arcs[i][j] = 10000;
			}

		}

	//输入顶点的信息，构建矩阵
	for (int i = 0; i < G->arc_count; i++)
	{
		VertexType vex1 = (VertexType)malloc(sizeof(char) * 10);
		VertexType vex2 = (VertexType)malloc(sizeof(char) * 10);
		cout << "vertex message:";
		cin >> vex1;
		cout << "near vextex message:" << endl;
		cin >> vex2;

		int location_vex1 = LocationVertex(G, vex1);
		int location_vex2 = LocationVertex(G, vex2);

		if (location_vex1 == -1 || location_vex2 == -1)
		{
			return ERROR;
		}

		G->arcs[location_vex1][location_vex2] = 1;
		G->arcs[location_vex2][location_vex1] = 1;


		free(vex1);
		free(vex2);
	}


	return OK;
}


int LocationVertex(MatrixGraph* G, VertexType vex)
{
	int i = 0;

	for (i = 0; i < G->vertex_count; i++)
	{
		if (strcmp(G->vertexs[i], vex) == 0)
		{
			break;
		}
	}

	return (G->vertex_count == i) ? -1 : i;
}

void TestMatrixGraph()
{
	MatrixGraph G;

	//创建
	int status = CreateUDG(&G);

	if (status == ERROR)
	{
		cout << "Matrix graph come to nothing" << endl;
		return;
	}

	cout << "This matrix graph is :" << endl;

	for (int i = 0; i < G.vertex_count; i++)
	{
		cout << "	" << G.vertexs[i];
	}

	cout << endl;

	for (int i = 0; i < G.vertex_count; i++)
	{
		cout << endl;
		cout << G.vertexs[i];
		for (int j = 0; j < G.vertex_count; j++)
		{
			cout << "	" << G.arcs[i][j];
		}
		cout << endl;
	}

	TheShortestPathBegin(&G);
}