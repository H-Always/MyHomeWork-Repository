#include "MatrixGraph.h"


int main()
{

	choose choose;

	cout << "现在支持的功能有：" << endl;
	cout << "1. 自定义邻接矩阵" << endl;
	cout << "2. 查看校园地图" << endl;
	cout << "3. 敬请期待" << endl;
	cout << "输入你想要的功能" << endl;

	cin >> choose;

	switch (choose)
	{
	case 1:
		TestMatrixGraph();
		break;
	case 2:
		ExistingMatrixGraph();
		break;
	default:
		cout << "输入有误" << endl;
		break;
	}


	return 0;
}