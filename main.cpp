#include "MatrixGraph.h"


int main()
{

	choose choose;

	cout << "����֧�ֵĹ����У�" << endl;
	cout << "1. �Զ����ڽӾ���" << endl;
	cout << "2. �鿴У԰��ͼ" << endl;
	cout << "3. �����ڴ�" << endl;
	cout << "��������Ҫ�Ĺ���" << endl;

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
		cout << "��������" << endl;
		break;
	}


	return 0;
}