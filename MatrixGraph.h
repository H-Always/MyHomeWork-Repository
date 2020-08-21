#pragma once
#pragma once

/* 定义一下邻接矩阵 */

#include <iostream>
#include <cstdlib>
#include <string>
#include "GraphModel.h"

using namespace std;

//定义图的基本类型
typedef struct {
	//顶点数组
	VertexType  vertexs[MAX_VERTEX];
	//边数组，邻接矩阵
	ArcType arcs[MAX_ARC][MAX_ARC];
	//现有权值矩阵
	ArcType existingArcs[MAX_SCHOOL][MAX_SCHOOL];
	//顶点个数
	int vertex_count;
	//边或弧的数量
	int arc_count;
	//图的类型
	Graphkind kind;
}MatrixGraph;



//自己随机构建的邻接矩阵
int CreateUDG(MatrixGraph* G);

//给出一个现有的邻接矩阵
void ExistingMatrixGraph();

//返回顶点集合的下标
int LocationVertex(MatrixGraph* G, VertexType vex);

//测试打印邻接矩阵
void TestMatrixGraph();

//初始化路径
void init(int dis[MAX_SCHOOL], bool visit[MAX_SCHOOL]);

//最短路径的初始点位
void TheShortestPathBegin(MatrixGraph* G);

//最短路径查找-Djkstra算法
void dijkstra(MatrixGraph* G, int index);

//校园图的初始点位
void ExistingTheShortestPathBegin(string* vertexs, int arcs[][MAX_SCHOOL]);

//判断点位的坐标，返回最短路径的数组下标
int ExistingLocationVertex(string vertexs[], string vex);

//现有的校园地图的最短路径的-Dijstra算法
void ExistingDijkstra(string vertexs[], int arcs[][MAX_SCHOOL], int index);
