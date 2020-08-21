#pragma once
#pragma once

/*
# _*_coding: UTF-8 _*_
# 开发人员: 胡羽凡
# 开发时间: 2019/5/26 9:00
# 文件名称: Campus_Juide.cpp
# 开发工具: Visual Studio 2017
# !/usr/bin/c++
# -*- coding:utf-8 -*-
*/



/* 定义了图的基本元素 */

#define OK 1
#define ERROR 0
#define MAX 1024
#define MAX_VERTEX 128
#define MAX_ARC 128
#define MAX_SCHOOL 20


/* 定义图的枚举类型 */
typedef enum
{
	directed_graph,		//有向图
	undirected_graph,	//无向图
	directed_net,		//有向网
	undirected_net		//无向网
}Graphkind;


//定义顶点数据类型为字符串型 
//不要忘记分配内存！
typedef char* VertexType;

//权值为int类型
typedef int ArcType;

//switch判断条件
using choose = int;

