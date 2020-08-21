#pragma once
#pragma once

/* ����һ���ڽӾ��� */

#include <iostream>
#include <cstdlib>
#include <string>
#include "GraphModel.h"

using namespace std;

//����ͼ�Ļ�������
typedef struct {
	//��������
	VertexType  vertexs[MAX_VERTEX];
	//�����飬�ڽӾ���
	ArcType arcs[MAX_ARC][MAX_ARC];
	//����Ȩֵ����
	ArcType existingArcs[MAX_SCHOOL][MAX_SCHOOL];
	//�������
	int vertex_count;
	//�߻򻡵�����
	int arc_count;
	//ͼ������
	Graphkind kind;
}MatrixGraph;



//�Լ�����������ڽӾ���
int CreateUDG(MatrixGraph* G);

//����һ�����е��ڽӾ���
void ExistingMatrixGraph();

//���ض��㼯�ϵ��±�
int LocationVertex(MatrixGraph* G, VertexType vex);

//���Դ�ӡ�ڽӾ���
void TestMatrixGraph();

//��ʼ��·��
void init(int dis[MAX_SCHOOL], bool visit[MAX_SCHOOL]);

//���·���ĳ�ʼ��λ
void TheShortestPathBegin(MatrixGraph* G);

//���·������-Djkstra�㷨
void dijkstra(MatrixGraph* G, int index);

//У԰ͼ�ĳ�ʼ��λ
void ExistingTheShortestPathBegin(string* vertexs, int arcs[][MAX_SCHOOL]);

//�жϵ�λ�����꣬�������·���������±�
int ExistingLocationVertex(string vertexs[], string vex);

//���е�У԰��ͼ�����·����-Dijstra�㷨
void ExistingDijkstra(string vertexs[], int arcs[][MAX_SCHOOL], int index);
