#pragma once
#pragma once

/*
# _*_coding: UTF-8 _*_
# ������Ա: ����
# ����ʱ��: 2019/5/26 9:00
# �ļ�����: Campus_Juide.cpp
# ��������: Visual Studio 2017
# !/usr/bin/c++
# -*- coding:utf-8 -*-
*/



/* ������ͼ�Ļ���Ԫ�� */

#define OK 1
#define ERROR 0
#define MAX 1024
#define MAX_VERTEX 128
#define MAX_ARC 128
#define MAX_SCHOOL 20


/* ����ͼ��ö������ */
typedef enum
{
	directed_graph,		//����ͼ
	undirected_graph,	//����ͼ
	directed_net,		//������
	undirected_net		//������
}Graphkind;


//���嶥����������Ϊ�ַ����� 
//��Ҫ���Ƿ����ڴ棡
typedef char* VertexType;

//ȨֵΪint����
typedef int ArcType;

//switch�ж�����
using choose = int;

