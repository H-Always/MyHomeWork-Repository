
#include "MatrixGraph.h"

void ExistingMatrixGraph()
{
	string vertexs[MAX_SCHOOL] =
	{
		"六号楼","七号楼","北门","快递中心","文学院",
		"体育学院","老图书馆","音乐学院","生命科学学院","图书馆",
		"嘉禾园","珍禾园","西门" ,"综合楼","操场",
		"小树林","大剧场" ,"医学楼","建工楼","理工楼"
	};

	//现在的大学虽然很不好，但他终究是大学
	//学校的生活也不错
	//以后，我要成为一名程序员
	//用键盘专一套房子
	//并且再次发誓，我一定会坚持原则
	//在职场不喝酒，酒不是好东西
	//以上

	int arcs[MAX_SCHOOL][MAX_SCHOOL] =
	{
		//六 七 北  快 文  体  老   音  生  图  嘉  珍  西  综  操  小  大   医   建   理
		/*六*/{0,150,120,40,250,300,310,600,600,750,650,770,1200,900,600,500,800,1000,1000,1250},
		/*七*/{150,0,100,120,200,355,290,530,500,750,580,680,1100,800,500,470,800,1000,1000,1250},
		/*北*/{120,100,0,120,310,440,320,630,620,830,670,770,1200,880,630,550,910,1100,1100,1350},
		/*快*/{40,120,120,0,290,340,310,640,640,750,690,820,1240,900,640,500,800,1000,1000,1250},
		/*文*/{250,200,310,290,0,300,190,500,510,580,490,600,1000,800,550,230,680,880,880,1160},
		/*体*/{300,355,440,340,300,0,150,400,400,300,550,580,900,650,600,120,450,750,700,1050},
		/*老*/{310,299,320,310,190,150,0,300,400,300,490,510,750,600,550,50,450,750,700,1050},
		/*音*/{600,530,630,640,500,400,300,0,220,280,250,250,700,270,580,240,290,460,440,700},
		/*生*/{600,500,620,640,510,400,400,220,0,150,290,260,760,260,620,150,280,450,420,650},
		/*图*/{750,750,830,750,580,300,300,280,150,0,310,280,790,250,645,170,160,470,440,670},
		/*嘉*/{650,580,670,690,490,550,490,250,290,310,0,60,530,200,200,210,310,400,430,530},
		/*珍*/{770,680,770,820,600,580,510,250,260,280,60,0,500,160,200,200,260,350,390,500},
		/*西*/{1200,1100,1200,1240,1000,900,750,700,760,790,530,500,0,500,200,530,530,560,590,640},
		/*综*/{900,800,880,900,800,650,600,270,260,250,200,160,500,0,320,250,250,360,390,690},
		/*操*/{600,500,630,640,550,600,550,580,620,645,200,200,200,320,0,360,580,700,740,880},
		/*小*/{500,470,550,500,230,120,50,240,150,170,210,200,530,250,360,0,360,470,500,620},
		/*大*/{800,800,910,800,680,450,450,290,280,160,310,260,530,250,580,360,0,230,200,350},
		/*医*/{1100,1000,1100,1000,750,750,460,450,470,400,350,560,360,700,470,230,0,50,150},
		/*建*/{1000,1000,1100,1880,700,700,440,420,440,430,390,590,390,740,500,200,50,0,150},
		/*理*/{1250,1200,1350,1160,1050,1050,700,650,670,530,500,640,690,880,620,350,150,150,0}
	};

	ExistingTheShortestPathBegin(vertexs, arcs);
}

void ExistingTheShortestPathBegin(string* vertexs, int arcs[][MAX_SCHOOL])
{
	string begin_site;
	cout << "now we have support place :" << endl;

	for (int i = 0; i < MAX_SCHOOL; i++)
	{
		if ((i % 5) == 0)
		{
			cout << endl;
		}
		cout << vertexs[i] << "		" << endl;

	}
	cout << endl;
	cout << "input you site:" << endl;

	cin >> begin_site;

	int Existing_location_site_begin = ExistingLocationVertex(vertexs, begin_site);

	if (Existing_location_site_begin == -1)
	{
		cout << "input error" << endl;
		return;
	}

	ExistingDijkstra(vertexs, arcs, Existing_location_site_begin);
}

int ExistingLocationVertex(string vertexs[], string vex)
{
	int i = 0;

	for (i = 0; i < MAX_SCHOOL; i++)
	{
		if (vertexs[i] == vex)
		{
			break;
		}
	}

	return (MAX_SCHOOL == i) ? -1 : i;
}

void ExistingDijkstra(string vertexs[], int arcs[][MAX_SCHOOL], int index)
{
	int distance[MAX_SCHOOL];
	bool visit[MAX_SCHOOL];


	//先初始化一下，清空内存
	init(distance, visit);


	distance[index] = 0;
	for (int i = 0; i < MAX_SCHOOL; i++)
	{
		int min_distance_vertex = 10000;
		int min_mark = 0;

		for (int j = 0; j < MAX_SCHOOL; j++)
		{
			if (visit[j] == false && distance[j] < min_distance_vertex)
			{
				min_distance_vertex = distance[j];
				min_mark = j;
			}

		}
		visit[min_mark] = true;

		for (int k = 0; k < MAX_SCHOOL; k++)
		{
			if (visit[k] == false && distance[k] > distance[min_mark] + arcs[min_mark][k])
			{
				distance[k] = distance[min_mark] + arcs[min_mark][k];
			}
		}



	}

	string over_site;

	cout << endl;

	cout << "input you want to go site:" << endl;

	cin >> over_site;

	int Existing_location_site_over = ExistingLocationVertex(vertexs, over_site);

	if (Existing_location_site_over == -1)
	{
		cout << "input error" << endl;
		return;
	}


	cout << "you want to go place distance :" << endl;
	cout << distance[Existing_location_site_over] << endl;

	cout << endl;
	cout << endl;

	cout << "Thank you for your using it ~ ";
	return;

}
