#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <array>
#include <process.h>
#include <Windows.h>
#include<tchar.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

using namespace std;

int main()
{
	//���׵�����
	string value_father_name;
	//Ů��������
	string value_daughter_name;
	//Ů�������·�
	int value_birth_month;
	//Ů������������
	int value_birth_date;
	//Ů��������
	string value_daughter_constell;
	//Ů�������������Ϣ
	string value_daughter_baseinfo;
	//���������Ϣ¼��
	vector<int> value_vec_baseinfo;
	//���������Ϣ¼������¼��
	int value_array[5];
	//���������Ϣ������
	array<string, 5> value_array_baseinfo_names = { "����","����","����","����","����" };
	//��Ǯ��������
	int value_baseinfo_money = 100;
	//�㻨Ǯ��������
	int value_baseinfo_pocket_money = 1000;
	//��ǰ��������
	int value_baseinfo_hp = 60;
	//��ǰħ������
	int value_baseinfo_mp = 60;
	//ͳ������ֵ������
	int value_shape_baseinfo;
	//ͳ�ƽ�Ǯֵ������
	int value_shape_money;
	//�жϹؼ���
	int value_choice;
	//���л�������
	vector<string> value_city = { "����ĳ���","����ĳ���","���˵ĳ���","����ĳ���","����ĳ���" };
	//����Ʒ��������
	array<string, 20> value_baseinof_items;
	//���߻�������
	array<string, 40> value_baseinof_equipment_armor;
	//������������
	array<int, 20> value_baseinof_equipment_weapon;
	//����ֵϵͳ
	int value_baseinof_experience;
	//�ж����մ��
	int finally_achievement = 0;
	int finally_money = 0;

	string constell_names[12][2]
	{
		{"Ħ����","ˮƿ��"},//һ��
		{"ˮƿ��","˫����"},//����
		{"˫����","������"},//����
		{"������","��ţ��"},//����
		{"��ţ��","˫����"},//����
		{"˫����","��з��"},//����
		{"��з��","ʨ����"},//����
		{"ʨ����","��Ů��"},//����
		{"��Ů��","�����"},//����
		{"�����","��Ы��"},//ʮ��
		{"��Ы��","������"},//ʮһ��
		{"������","Ħ����"},//ʮ����

	};
	int constell_dates[]{ 20,19,21,20,21,22,23,23,23,24,23,22 };




	//���븸�׵�����
	cout << "���븸�׵�����" << endl;
	cin >> value_father_name;
	//����Ů��������
	cout << "����Ů��������" << endl;
	cin >> value_daughter_name;
	//����Ů������������
	cout << "����Ů������������" << endl;
	cin >> value_birth_month >> value_birth_date;

	value_daughter_constell = constell_names[value_birth_month - 1]
		[value_birth_date / constell_dates[value_birth_month - 1]];

	cout << "Ů������ϢΪ��" << endl;
	cout << "����" << value_daughter_name << endl;
	cout << "���գ�1885-" << value_birth_month << "-" << value_birth_date << endl;
	cout << "������" << value_daughter_constell << endl;


	//ÿ�������Ĳ�ͬ����
	if (value_daughter_constell == "������")
	{
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(18);
		value_vec_baseinfo.push_back(20);
		value_vec_baseinfo.push_back(16);
		value_vec_baseinfo.push_back(13);
	}
	else if (value_daughter_constell == "��ţ��")
	{
		value_vec_baseinfo.push_back(10);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(14);
		value_vec_baseinfo.push_back(17);
		value_vec_baseinfo.push_back(14);
	}
	else if (value_daughter_constell == "˫����")
	{
		value_vec_baseinfo.push_back(16);
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(19);
		value_vec_baseinfo.push_back(17);
		value_vec_baseinfo.push_back(14);
	}
	else if (value_daughter_constell == "��з��")
	{
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(19);
		value_vec_baseinfo.push_back(16);
		value_vec_baseinfo.push_back(19);
		value_vec_baseinfo.push_back(13);
	}
	else if (value_daughter_constell == "������")
	{
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(17);
		value_vec_baseinfo.push_back(18);
	}
	else if (value_daughter_constell == "ʨ����")
	{
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(16);
		value_vec_baseinfo.push_back(14);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(13);
	}
	else if (value_daughter_constell == "��Ů��")
	{
		value_vec_baseinfo.push_back(12);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(19);
		value_vec_baseinfo.push_back(16);
		value_vec_baseinfo.push_back(13);
	}
	else if (value_daughter_constell == "�����")
	{
		value_vec_baseinfo.push_back(12);
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(17);
		value_vec_baseinfo.push_back(19);
	}
	else if (value_daughter_constell == "��Ы��")
	{
		value_vec_baseinfo.push_back(19);
		value_vec_baseinfo.push_back(10);
		value_vec_baseinfo.push_back(11);
		value_vec_baseinfo.push_back(11);
		value_vec_baseinfo.push_back(18);
	}
	else if (value_daughter_constell == "������")
	{
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(15);
	}
	else if (value_daughter_constell == "Ħ����")
	{
		value_vec_baseinfo.push_back(18);
		value_vec_baseinfo.push_back(17);
		value_vec_baseinfo.push_back(10);
		value_vec_baseinfo.push_back(14);
		value_vec_baseinfo.push_back(16);
	}
	else if (value_daughter_constell == "ˮƿ��")
	{
		value_vec_baseinfo.push_back(14);
		value_vec_baseinfo.push_back(18);
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(14);
		value_vec_baseinfo.push_back(17);
	}
	else if (value_daughter_constell == "˫����")
	{
		value_vec_baseinfo.push_back(17);
		value_vec_baseinfo.push_back(12);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(20);
		value_vec_baseinfo.push_back(14);
	}

	/*if (value_daughter_constell == "������") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "��ţ��") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "˫����") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "��з��") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "ʨ����") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "��Ů��") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "�����") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "��Ы��") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "������") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "Ħ����") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "ˮƿ��") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "˫����") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	*/


	//��Ϸ��ʼ��ŷ�޵�ħ��ʱ��
	//����һ��ǿ�ߵ�ʱ�������������˲����ʸ����ȥ
	//��1686���ĳһ�죬��������һ������
	//�뿪����������ɣ�

	//��������
	//PlaySound(TEXT("E:\\AnyThingAboutGame\\music\\��ϧû���.wav"), NULL, SND_ASYNC | SND_NODEFAULT);

	//���Ÿ���������������
	mciSendString(_T("open \"F:\games\\�ֿ��� - ��ϧû���.wav\" alias file"), NULL, 0, NULL);
	mciSendString(_T("play file"), NULL, 0, NULL);



	//��ʼ����

	Sleep(2000);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "  ....." << endl;
	cout << endl;
	Sleep(2000);
	cout << "  ....." << endl;
	cout << endl;
	Sleep(2000);
	cout << "  ....." << endl;
	cout << endl;
	cout << endl;
	Sleep(2000);
	cout << "�������........" << endl;
	Sleep(3000);
	cout << endl;
	cout << "���ֻ�������Լ���.........." << endl;
	Sleep(2000);
	cout << endl;
	cout << "��Ƭ��½�����ֽ���´�½������ŷ���������������ǰ����Ƭ��½���Ǵ�����������������������ల���£����������ţ�" << endl;
	Sleep(2000);
	cout << endl;
	cout << "�������е���������Ϊ��������̫��ǿ��������һ������ͳ�����ǣ����ڿ־�����������һ������˵����ʱͳ���ߣ�" << endl;
	Sleep(2000);
	cout << endl;
	cout << "���Ǽ����ǻۣ������˿��Կ�����������ع̩��ʯ��������������������Ϊ�ƴ�ķ����ж�������ս�����������˰���֮�ã�" << endl;
	Sleep(2000);
	cout << endl;
	cout << "����������ʣ�޼��������е�������ȫ���������໶��ȸԾ�����˵�ʱͳ���ߵ��������������Ƭ��½......" << endl;
	Sleep(2000);
	cout << endl;
	cout << "��ת���ƣ�ʱ�����գ���´�½���Ѻ�ŷ��������½һ�����������ɵ������ţ���ȫ��֪����Ƭ��½�����й����ĺۼ�" << endl;
	Sleep(2000);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "..." << endl;
	Sleep(2000);
	cout << endl;
	cout << "..." << endl;
	Sleep(2000);
	cout << endl;
	cout << "�ҵ�һ��..." << endl;
	Sleep(2000);
	cout << endl;
	cout << "..." << endl;
	Sleep(2000);
	cout << endl;
	cout << "�ʹ˽����˰�...." << endl;
	Sleep(2000);
	cout << endl;
	Sleep(2000);
	cout << endl;
	cout << "..." << endl;
	Sleep(2000);
	cout << endl;
	cout << "..." << endl;
	Sleep(2000);
	cout << endl;
	cout << "���������������۾�.." << endl;
	Sleep(2000);
	cout << endl;
	cout << "����һ�����������˹��ˣ���¯�Ļ�ѷ��俾�ĺ�ů��һ�����ݴ��Ƶ����������㣬" << endl;
	Sleep(2000);
	cout << endl;
	cout << "�������ˣ����ʵ�������Ӧ��������İɣ���ô��ɭ�����ε��ˣ���" << endl;
	Sleep(2000);
	cout << endl;
	cout << "��....." << endl;
	Sleep(2000);
	cout << endl;
	cout << "�㿴�˿������ǽ" << endl;
	Sleep(2000);
	cout << endl;
	cout << "... ..." << endl;
	Sleep(2000);
	cout << endl;
	cout << "��������������һֱ�ɻʹ���ͳ�Σ���������ʹ�ͳ�εĽ�͢����һֱ�����Ʒ��ʹ���ͳ�Σ�������ϧ�����������ħ��" << endl;
	Sleep(2000);
	cout << endl;
	cout << "��������������͢������������ˣ�֮��ʹ�Ϊ�˹���ͳ�Σ���ʼͨ�����н�͢�����Լ����͢�йص��ˣ�" << endl;
	Sleep(2000);
	cout << endl;
	cout << "�㸸����Ϊ�������ι�һ������ʿ�������Խ��̣�����Ϊ�����ԭ���ӹ������ֵĵ�����ȴ�յ�������ż�����������" << endl;
	Sleep(2000);
	cout << endl;
	cout << "������������ɭ�֣�ϣ����һ��Ƨ���ط���������ȥ�������ţ�������˹�ȥ... ..." << endl;
	Sleep(2000);
	cout << endl;
	cout << "��Ҫ��̫���ˣ��Ǹ��˵��ʻ���������ʹ�Ļ��䣻" << endl;
	Sleep(2000);
	cout << endl;
	cout << "���ʲô���֣�" << endl;
	cout << "��? �ҽ�...." << endl;
	cout << "����������Լ������֣���ȴ���벻����......" << endl;
	Sleep(2000);
	cout << endl;
	cout << "......" << endl;
	Sleep(2000);
	cout << endl;
	cout << "���˺��񿴳�����ľ���" << endl;
	cout << "��������ǰ�Ļ��������ȥ�Ļ������Լ���һ���µ����ְ�" << endl;
	//Ů������
	cout << "���Ǹ�������" << endl;
	cout << "��Ҳ�����������ʵ���" << endl;
	Sleep(2000);
	cout << endl;
	cout << "��������Ҳ�����壬���ǡ��������ѡ�񣩣��Ժ���͸����Ұɡ���" << endl;
	cout << "���ǣ��㿪ʼ��һ��ȫ�µ�����" << endl;
	cout << "... ..." << endl;



	cout << "���Ǹ�������" << "�ҵ�������" << endl;
	//��Ů������
	cout << "���������û�ȱһ����ɨ�������ˣ�����㲻����Ļ�������������" << endl;
	cout << "���������������˾���������" << "" << endl;

	cout << "��Ҳû��˵ʲô����е�Եĵ��˵�ͷ" << endl;


	//����ѡ�񣬸���ѡ���ж���������ֵ

	cout << "���ڿ�ʼѡ�������Ϣ" << "\n(������ѡ���⽫��Ӱ����ľ��鷢չ)" << endl;

	cout << "ֱ��������ֻ��һ�λ��ᣡ" << "\n(��1����...)" << endl;

	cin >> value_choice;

	cout << "�������һ��ʲô��ͥ:\n1.�ϵȵĹ����ͥ\n2.����������ͥ\n3.����ĸ��̼�ͥ\n4.��͢��������ͥ" << endl;
	cin >> value_choice;
	switch (value_choice)
	{
	case 1:
		for (int i = 0; i < 5; i++)
		{
			value_vec_baseinfo[i] += 15;

		}
		cout << "һ������ʹ����ļ�ͥû�䣬��ĸ��֪���٣�����Ҳ��������...." << "�ⳡ���������:" << endl;
		cout << "1.����Ļ���" << endl << "2.�����Ľ���" << endl;
		cin >> value_choice;
		switch (value_choice)
		{
		case 1:
			value_vec_baseinfo[4] += 8;

			for (int i = 0; i < 5; i++)
			{
				if (i != 5)
				{
					value_vec_baseinfo[i] += 5;
				}
			}
			break;
		case 2:
			value_vec_baseinfo[2] += 8;

			for (int i = 0; i < 5; i++)
			{
				if (i != 2)
				{
					value_vec_baseinfo[i] += 4;
				}
			}
			break;

		default:
			for (int i = 0; i < 5; i++)
			{
				value_vec_baseinfo[i] += 1;
			}
			break;
		}
		break;
	case 2:
		value_vec_baseinfo[0] += 20;
		value_vec_baseinfo[4] += 20;

		for (int i = 0; i < 5; i++)
		{
			if (i != 1 || i != 4)
			{
				value_vec_baseinfo[i] += 9;
			}
		}
		cout << "ԭ�����ǹ���ƽ�����Ҹ������Ȼ�����ǵĸ������������Ҳû���������ĸ��Ҳ˼����Ȳ���������"
			<< "\n�㸸����������:\n1.���޵�Ϯ��\n2.��͢������ץ��\n3.��ͽ��Ϯ��\n4.������ĳ���ط�" << endl;
		cin >> value_choice;
		switch (value_choice)
		{
		case 1:
			value_vec_baseinfo[0] += 5;
			value_vec_baseinfo[4] += 5;

			for (int i = 0; i < 5; i++)
			{
				if (i != 1 || i != 4)
				{
					value_vec_baseinfo[i] += 4;
				}
			}
			break;
		case 2:
			value_vec_baseinfo[1] += 5;

			for (int i = 0; i < 5; i++)
			{
				if (i != 1 || i != 4)
				{
					value_vec_baseinfo[i] += 4;
				}
			}
			break;
		case 3:
			value_vec_baseinfo[4] += 5;

			for (int i = 0; i < 5; i++)
			{
				if (i != 4)
				{
					value_vec_baseinfo[i] += 4;
				}
			}
			break;
		case 4:
			value_vec_baseinfo[1] += 5;

			for (int i = 0; i < 5; i++)
			{
				if (i != 1)
				{
					value_vec_baseinfo[i] += 4;
				}
			}
			break;
		default:
			for (int i = 0; i < 5; i++)
			{
				value_vec_baseinfo[i] += 0;
			}
			break;
		}
		break;
	case 3:
		value_vec_baseinfo[1] += 18;
		value_vec_baseinfo[3] += 16;
		for (int i = 0; i < 5; i++)
		{
			if (i != 1 || i != 3)
			{
				value_vec_baseinfo[i] += 14;
			}
		}
		value_baseinfo_money += 100;
		cout << "\n��ĸ��װ�����ң���Ϊ������츳�벻и��Ŭ���������̽�ո¶ͷ��"
			<< "\n��Ȼ�����������˵��"
			<< "\n��ʵ�ϣ���ĸ�����Ȼ�ǰ�����ң�����ȴ���Ų��ٵ�\"����\""
			<< "\n��ĸ��׺���Ⱥ���ѱ�������������������������Ʒ"
			<< "\n��ʵ�����㸸��������ĳ���»�ҩ���һ�죬��������һ��ȥ���㸸�׳Է�..."
			<< "\n��������㸸�����Լ�����������û�˺���...."
			<< "\n�㸸�׳��µ�ԭ�������:\n1.\"����\"�ı���\n2.�������ֵĶ��Ծ���\n3.ɱ�ֵ�͵Ϯ\n4.ĳλ��������Ĺ˿�Ͷ��"
			<< endl;
		cin >> value_choice;
		switch (value_choice)
		{
		case 1:
			value_vec_baseinfo[4] += 5;

			for (int i = 0; i < 5; i++)
			{
				if (i != 4)
				{
					value_vec_baseinfo[i] += 4;
				}
			}
			break;
		case 2:
			value_vec_baseinfo[3] += 5;

			for (int i = 0; i < 5; i++)
			{
				if (i != 3)
				{
					value_vec_baseinfo[i] += 4;
				}
			}
			break;
		case 3:
			value_vec_baseinfo[4] += 8;

			for (int i = 0; i < 5; i++)
			{
				if (i != 4)
				{
					value_vec_baseinfo[i] += 5;
				}
			}
			break;
		case 4:
			value_vec_baseinfo[2] += 9;

			for (int i = 0; i < 5; i++)
			{
				if (i != 2)
				{
					value_vec_baseinfo[i] += 3;
				}
			}
			break;
		default:
			for (int i = 0; i < 5; i++)
			{
				value_vec_baseinfo[i] += 0;
			}
			break;
		}
		break;
	case 4:
		value_vec_baseinfo[0] += 19;
		value_vec_baseinfo[3] += 18;
		value_vec_baseinfo[4] += 17;
		for (int i = 0; i < 5; i++)
		{
			if (i != 0 || i != 3 || i != 4)
			{
				value_vec_baseinfo[i] += 11;
			}
		}
		cout << "\n��ĸ�����һλ��͢�������������Գ���Ǳ���Сʱ����Ҳ���������������ҫ���"
			<< "\n����ĳһ����ĸ���ͻȻ��ץ���˴��Σ�������⣬������ÿ��ȥ���㸸���ͷ�"
			<< "\n��һ�죬��ȥ�ͷ�ʱ�����㸸���Ѿ�����������"
			<< "\n�������׵�����ʱ�����㸸�׾�Ȼ����ı�ѱ䣬�����Ϣ�������"
			<< "\n�㸸�׵����������"
			<< "\n1.��ı�ߵİ�ɱ\n2.Ϊ���ѱ�Ľ����㸸��ѡ����ɱ\n3.�����������ܴ����㸸��\n4.�����¶�̫�ߣ��㸸����Ӧ����"
			<< endl;
		cin >> value_choice;
		switch (value_choice)
		{
		case 1:
			value_vec_baseinfo[4] += 8;

			for (int i = 0; i < 5; i++)
			{
				if (i != 4)
				{
					value_vec_baseinfo[i] += 5;
				}
			}
			break;
		case 2:
			//ʲôô��û�з������Ժ���˵��
			break;
		case 3:
			value_vec_baseinfo[2] += 8;

			for (int i = 0; i < 5; i++)
			{
				if (i != 2)
				{
					value_vec_baseinfo[i] += 4;
				}
			}
			break;
		case 4:
			for (int i = 0; i < 5; i++)
			{
				value_vec_baseinfo[i] += 6;
			}
			break;
		default:
			break;
		}
		break;
	default:
		for (int i = 0; i < 5; i++)
		{
			value_vec_baseinfo[i] += 0;
		}
		break;
	}



	cout << "����ǿ��ĵ��ˣ���ϣ��\n1.�¸ҵ�ֱ����ˣ�\n2.С��Ϊ�ϣ���Զ��������" << endl;
	cin >> value_choice;
	switch (value_choice)
	{
	case 1:
		value_vec_baseinfo[0] += 10;
		value_vec_baseinfo[4] += 10;
		break;
	case 2:
		value_vec_baseinfo[1] += 10;
		value_vec_baseinfo[3] += 10;
		break;

	}


	cout << "" << endl;







	//��Ϸ������
	//����㷨������������Ϸ����
	srand(time(NULL));

	for (int year = 1659; year <= 1660; year++)
	{
		for (int month = (year == 1894) ? value_birth_month : 1; month <= 12; month++)
		{
			int random = rand() % 11;

			//�жϵ�ǰ��Ѫ����ħ������ 
			value_baseinfo_hp += (int)(value_vec_baseinfo[0] * 1.5);
			value_baseinfo_mp += (int)(value_vec_baseinfo[1] * 1.8);

			//�ж�Ů��������
			if (month == value_birth_month)
			{
				cout << "\n" << "\n" << "\n" << endl;
				cout << "������Ů��" << value_daughter_name << "������" << endl;
				cout << "Ҫ��ҪΪŮ����������ףһ��" << endl;
				cout << "\n1.��ף����\n2.����ף����" << endl;
				cin >> value_choice;
				if (value_choice == 1)
				{
					cout << "��Ů�����˺�Ư����Сȹ��," << value_daughter_name << "�ܿ���" << endl;
					for (int i = 0; i < 5; i++)
					{
						value_vec_baseinfo[i] += random * 4 + 5;
						cout << value_array_baseinfo_names[i] << "������:" << random * 2 + 8 << endl;
					}
					value_baseinfo_money += random - 35;
					cout << "��Ǯ������" << random - 35 << endl;
				}

			}
			//��ʾŮ���Ļ�����Ϣ
			cout << "\n1.�鿴״̬\n2.�����г�\n3.����̸��\n4.Ҫ�㻨Ǯ\n5.ȥ�̵�\n6.�浵" << endl;

			cin >> value_choice;
			switch (value_choice)
			{
			case 1://�鿴��ǰ״̬
				cout << "Ů������:" << value_daughter_name << endl;
				cout << "Ů��������:" << value_birth_month << "��" << value_birth_date << endl;
				cout << "Ů��������:" << value_daughter_constell << endl;
				cout << "��������:" << value_baseinfo_hp << endl;
				cout << "ħ������:" << value_baseinfo_mp << endl;
				cout << "���н�Ǯ:" << value_baseinfo_money << endl;
				cout << "��ǰʱ��:" << year << "-" << month << endl;
				cout << left << endl;
				for (int i = 0; i < 5; i++)
				{
					cout << value_array_baseinfo_names[i] << ": " << setw(4) << value_vec_baseinfo[i];
					value_shape_baseinfo = value_vec_baseinfo[i] / 25;
					value_shape_money = value_baseinfo_money / 35;
					for (int i = 1; i <= value_shape_baseinfo; i++)
					{
						cout << "��";
					}
					for (int i = 1; i <= 30 - value_shape_baseinfo; i++)
					{
						cout << "��";
					}
					cout << endl;
				}
				cout << left;
				cout << "��Ǯ" << ": " << setw(4) << value_baseinfo_money;
				for (int i = 1; i <= value_shape_money; i++)
				{
					cout << "��";
				}
				for (int i = 1; i <= 30 - value_shape_money; i++)
				{
					cout << "��";
				}
				month--;
				cout << endl;
				break;

			case 2://�����г�,ÿ������ల�������г�
				for (int i = 1; i < 4; i++) {
					cout << "\n1.��ʦѧ��\n2.��ѧ����\n3.���໨��\n4.ѧϰ����\n5.��ϰ���\n6.����ĥ��\n7.���Ǵ�..." << endl;
					cin >> value_choice;
					if (value_baseinfo_money <= 10 && value_choice != 6)
					{
						cout << "��Ľ�Ǯ���㣬ֻ�ܽ��Ǵ�" << endl;
						cout << "���Ǵ�..." << endl;
						if (random >= 9)
						{
							cout << "�����ܺ�" << endl;
							cout << "�����˺ܴ󷽵Ŀ��˺��ϰ壬׬�˺ܶ�Ǯ" << endl;
							value_baseinfo_money += random * 5 + 28;
							cout << "��Ǯ����" << random * 5 + 28 << endl;
						}
						else
						{
							cout << "��׬Ǯ" << endl;
							value_baseinfo_money += random * 5 + 15;
							cout << "��Ǯ����" << random * 5 + 15 << endl;
						}
					}
					else
					{
						switch (value_choice)
						{
						case 1: //��ѧ������������
							if (random >= 9)
							{
								cout << "�����ܺ�" << endl;
								cout << "�����˺�������ʦ��" << endl;
								cout << value_array_baseinfo_names[0] << "������:" << random * 3 + 3 << endl;
								value_vec_baseinfo[0] += random * 3 + 3;

								for (int i = 1; i < 5; i++)
								{
									value_vec_baseinfo[i] += random * 2;
									cout << value_array_baseinfo_names[i] << "������:" << random * 2 << endl;
								}
								cout << "��Ǯ����" << random * 2 << endl;
								value_baseinfo_money -= random * 2;
							}
							else
							{
								cout << "������ɣ�" << endl;
								cout << value_array_baseinfo_names[0] << "������:" << random * 2 << endl;
								value_vec_baseinfo[0] += random * 2;
								for (int i = 1; i < 5; i++)
								{
									value_vec_baseinfo[i] += random;
									cout << value_array_baseinfo_names[i] << "������:" << random << endl;
								}
								cout << "��Ǯ����" << random * 2 << endl;
								value_baseinfo_money -= random * 2;
							}
							break;
						case 2://��ѧ����������������
							if (random >= 9)
							{
								cout << "������һ�����������ص�����������" << endl;
								cout << "�Ժܹ�ļ۸����˼�����" << endl;
								cout << value_array_baseinfo_names[1] << "������:" << random * 3 + 4 << endl;
								value_vec_baseinfo[1] += random * 3 + 4;

								for (int i = 0; i < 5; i++)
								{
									if (i != 1)
									{
										value_vec_baseinfo[i] += random * 2;
										cout << value_array_baseinfo_names[i] << "������:" << random * 2 << endl;
									}
								}
								cout << "��Ǯ����" << random * 4 + 3 << endl;
								value_baseinfo_money -= random * 4 + 3;
							}
							else
							{
								cout << "������ɣ�" << endl;
								cout << value_array_baseinfo_names[1] << "������:" << random * 2 << endl;
								value_vec_baseinfo[1] += random * 2;

								for (int i = 0; i < 5; i++)
								{
									if (i != 1)
									{
										value_vec_baseinfo[i] += random;
										cout << value_array_baseinfo_names[i] << "������:" << random << endl;
									}
								}
								cout << "��Ǯ����" << random * 2 << endl;
								value_baseinfo_money -= random * 2;
							}
							break;
						case 3://���໨��������������
							if (random >= 9) {
								cout << "�������ܹ�������Ϥ�������������������ʿ" << endl;
								cout << "��ʿ����Ļ����޲����ڣ�����������ܶ���ֲ����" << endl;
								cout << value_array_baseinfo_names[2] << "������:" << random * 3 << endl;
								value_vec_baseinfo[2] += random * 3;
								cout << endl;
								for (int i = 0; i < 5; i++)
								{
									if (i != 2)
									{
										value_vec_baseinfo[i] += random;
										cout << value_array_baseinfo_names[i] << "������:" << random << endl;
									}
								}
								cout << "��Ǯ����" << random << endl;
								value_baseinfo_money -= random;
							}
							else {
								cout << "������ɣ�" << endl;
								cout << value_array_baseinfo_names[2] << "������:" << random * 2 << endl;
								cout << "��Ǯ����" << random * 2 << endl;
								value_vec_baseinfo[2] += random * 2;
								cout << endl;
								for (int i = 0; i < 5; i++)
								{
									if (i != 2)
									{
										value_vec_baseinfo[i] += random;
										cout << value_array_baseinfo_names[i] << "������:" << random << endl;
									}
								}
								cout << "��Ǯ����" << random * 2 << endl;
								value_baseinfo_money -= random * 2;
							}
							break;
						case 4://ѧϰ������������
							cout << "������ɣ�" << endl;
							cout << value_array_baseinfo_names[3] << "������:" << random * 2 << endl;
							value_vec_baseinfo[3] += random * 2;
							cout << endl;
							for (int i = 0; i < 5; i++)
							{
								if (i != 3)
								{
									value_vec_baseinfo[i] += random;
									cout << value_array_baseinfo_names[i] << "������:" << random << endl;
								}
							}
							cout << "��Ǯ����" << random * 2 << endl;
							value_baseinfo_money -= random * 2;
							break;
						case 5://��ϰ�����������
							cout << "������ɣ�" << endl;
							cout << value_array_baseinfo_names[4] << "������:" << random * 2 << endl;
							value_vec_baseinfo[4] += random * 2;
							cout << endl;
							for (int i = 0; i < 5; i++)
							{
								if (i != 4)
								{
									value_vec_baseinfo[i] += random;
									cout << value_array_baseinfo_names[i] << "������:" << random << endl;
								}
							}
							cout << "��Ǯ����" << random * 2 << endl;
							value_baseinfo_money -= random * 2;
							break;
						case 6:
							cout << "��ѡ�����" << endl;
							for (int i = 0; i < 4; i++)
							{
								cout << i + 1 << "." << value_city[i] << endl;
							}
							cin >> value_choice;
							switch (value_choice)
							{
							case 1:
								cout << "��������" << value_city[value_choice - 1] << endl;
								cout << "�����������������ʲô" << endl;
								cout << "\n1.ȥ�ƹ�\n2.��װ���̵�\n3.��ҩˮ�̵�\n4.���ĥ��"
									<< "\n5.Ѱ���������ĵ�ʦ����תְ\6.�����" << endl;
								cin >> value_choice;
								switch (value_choice)
								{
								case 1:
									cout << "��������������е����к��뻵�ľƹ�" << endl;
									cout << "�ƹ��ϰ�����ĵذ������˽�ȥ" << endl;
									cout << "����ƹ�ֻ��������Ϊ�þƺͻ��Ƶľ�\nҪ��һ����" << endl;
									cout << "\n1.��һ���þ�\n2.��һ������\n3.���ˣ�лл" << endl;
									cin >> value_choice;
									switch (value_choice)
									{
									case 1:
										break;
									case 2:
										break;
									case 3:
										break;
									default:
										cout << "��ʲôҲû˵�����ޱ��������" << endl;
										break;
									}
									break;
								case 2:
									cout << "�㿴����һ��װ���̵�" << "\n����װ��������Ŀ" << "\n�����˽�ȥ" << endl;
									cout << "����Ц�Ž���ӭ�˽�ȥ������������ҵ�������������װ��" << endl;
									cout << "����µĿ��˿�������װ����Ȼ��ȫ�������Զ���һ�㣬�ʺ�����" << endl;
									cout << "Ҫ��ȥ��һ����\n1,���꿴��\n2.����лл" << endl;
									cin >> value_choice;
									switch (value_choice)
									{
									case 1:
										break;
									case 2:
										break;
									default:
										cout << "��ʲôҲû˵�����ޱ��������" << endl;
										break;
									}
									break;
								case 3:
									cout << "�㿴����һ��ҩˮ�̵�" << "\n����ҩˮ���෱��" << "\n�����˽�ȥ" << endl;
									cout << "����Ц�Ž���ӭ�˽�ȥ������������ҵ�������������װ��" << endl;
									cout << "����µĿ��˿�������ҩˮ������Ȼ�ܶ࣬��ҩˮƷ�ʶ���һ�㣬�ʺ�����" << endl;
									cout << "Ҫ��ȥ��һ����\n1,���꿴��\n2.����лл" << endl;
									cin >> value_choice;
									switch (value_choice)
									{
									case 1:
										break;
									case 2:
										break;
									default:
										cout << "��ʲôҲû˵�����ޱ��������" << endl;
										break;
									}
									break;
								case 4:
									cout << "������֪���˵����ŷǳ��ḻ�Ĺ���" << endl;
									cout << "���صİ��նԹ������ʹ��\nնɱ����Ҳ�ܹ�ȥ������ȡ�ͽ�" << endl;
									cout << "����ϸ�Ĺ۲���һ�����μ���Χ..." << endl;
									cout << "���ֹ��ﶼ������ʮ�ֵ�ǿ��,�ʺ�����" << endl;
									cout << "Ҫȥ������\n1.ȥɭ��ĥ�£�\n2.���˻س�" << endl;
									cin >> value_choice;
									switch (value_choice)
									{
									case 1:
										break;
									case 2:
										break;
									default:
										cout << "��ʲôҲû˵��һ�Բ����Ļس���" << endl;
										break;
									}
									break;
								case 5:
									cout << "�㻨�˺ܳ�ʱ�����Ĵ���̽��ʦ������" << "\n���ڵ�֪�˵�ʦ��ס��" << endl;
									cout << "��ʦ��һλ������������" << "\n�����������������ѡ���Ϊ" << endl;
									cout << "1.��ϰսʿ\n2.��ϰħ��ʦ\n3.����лл" << endl;
									cout << "Ҫ����תְ��" << endl;
									cin >> value_choice;
									switch (value_choice)
									{
									case 1:
										break;
									case 2:
										break;
									case 3:
										break;
									default:
										cout << "��ʲô��û��˵���뿪��" << endl;
										break;
									}
									break;
								case 6:
									break;
								default:
									break;
								}
								break;
							case 2:
								cout << "��������" << value_city[value_choice] << endl;
								cout << "�����������������ʲô" << endl;
								cout << "\n1.ȥ�ƹ�\n2.��װ���̵�\n3.��ҩˮ�̵�\n4.���ĥ��"
									<< "\n5.Ѱ���������ĵ�ʦ����תְ\6.�����" << endl;
								cin >> value_choice;
								switch (value_choice)
								{
								case 1:
									break;
								case 2:
									break;
								case 3:
									break;
								case 4:
									break;
								case 5:
									break;
								case 6:
									break;
								default:
									break;
								}
								break;
							case 3:
								cout << "��������" << value_city[value_choice] << endl;
								cout << "�����������������ʲô" << endl;
								cout << "\n1.ȥ�ƹ�\n2.��װ���̵�\n3.��ҩˮ�̵�\n4.���ĥ��"
									<< "\n5.Ѱ���������ĵ�ʦ����תְ\6.�����" << endl;
								cin >> value_choice;
								switch (value_choice)
								{
								case 1:
									break;
								case 2:
									break;
								case 3:
									break;
								case 4:
									break;
								case 5:
									break;
								case 6:
									break;
								default:
									break;
								}
								break;
							case 4:
								cout << "��������" << value_city[value_choice] << endl;
								cout << "�����������������ʲô" << endl;
								cout << "\n1.ȥ�ƹ�\n2.��װ���̵�\n3.��ҩˮ�̵�\n4.���ĥ��"
									<< "\n5.Ѱ���������ĵ�ʦ����תְ\6.�����" << endl;
								cin >> value_choice;
								switch (value_choice)
								{
								case 1:
									break;
								case 2:
									break;
								case 3:
									break;
								case 4:
									break;
								case 5:
									break;
								case 6:
									break;
								default:
									break;
								}
								break;
							case 5:
								break;
							}
							break;
						case 7://�����ӽ�Ǯ
							if (random >= 9)
							{
								cout << "�����ܺ�" << endl;
								cout << "�����˺ܴ󷽵Ŀ��˺��ϰ壬׬�˺ܶ�Ǯ" << endl;
								value_baseinfo_money += random * 5 + 28;
								cout << "��Ǯ����" << random * 5 + 28 << endl;
							}
							else {
								cout << "��׬Ǯ" << endl;
								value_baseinfo_money += random * 5 + 15;
								cout << "��Ǯ����" << random * 5 + 15 << endl;
							}
							break;
						default:
							cout << "ʲôҲû��" << endl;
							for (int i = 0; i < 5; i++)
							{
								value_vec_baseinfo[i] += random - 5;
								cout << value_array_baseinfo_names[i] << "������:" << random - 5 << endl;
							}
							value_baseinfo_money += random - 5;
							cout << "��Ǯ������" << random - 5 << endl;
							break;
						}
					}

					break;
				}
				break;
			case 3:
				cout << "��" << value_daughter_name << "̸��" << endl;
				for (int i = 0; i < 5; i++)
				{
					value_vec_baseinfo[i] += random - 2;
					cout << value_array_baseinfo_names[i] << "������" << random - 2 << endl;
				}
				value_baseinfo_money += random - 2;
				cout << "��Ǯ������" << random - 2 << endl;
				break;
			case 4:
				cout << "������˵����" << endl;
				cout << value_father_name << "���˺���ʹ������һ���㻨Ǯ" << endl;
				if (value_baseinfo_pocket_money > 0)
				{
					value_baseinfo_money += 125;
					value_baseinfo_pocket_money -= 125;
				}
				else
				{
					cout << value_father_name << "����ܲ�����˼��˵" << "�����Ѿ�û�ж����Ǯ��" << endl;
					cout << "����Ҫ�����Լ�������" << endl;
					month++;
				}
				value_baseinfo_pocket_money += 25;
				break;
			case 5:
				cout << "Ҫȥ:\n1.װ����\n2.ҩˮ�̵�" << endl;
				cin >> value_choice;
				switch (value_choice)
				{
				case 1:
					break;
				case 2:
					break;
				default:
					cout << "�ڵ�������˹�ʲôҲû��" << endl;
				}
				break;
			case 6:
				cout << "Ŀǰ����δʵ���������" << endl;
				cout << "�����ڴ�" << endl;
				month--;
				break;

			}
		}
	}

	for (int i = 0; i < 4; i++)
	{
		finally_achievement += value_vec_baseinfo[i];
	}

	if (finally_achievement > 3000)
	{
		cout << "���Ϊ��" << endl;
	}
	else if (finally_achievement > 2500)
	{
		cout << "���Ϊ��" << endl;
	}
	else if (finally_achievement > 2300)
	{
		cout << "���Ϊ��" << endl;
	}
	else
	{
		cout << "��һ������" << endl;
	}

	cout << "\n" << endl;
	cout << "�����꣡" << endl;
	cout << "\n" << endl;
	cout << "(����������Լ���)" << endl;
	cin >> value_choice;
	cout << "���˶����Ժ�...." << endl;
	//cin >> value_choice;
	cout << endl;
	cout << value_father_name << "�Ѿ�������ȥ..." << endl;
	//cin >> value_choice;
	cout << endl;
	cout << value_daughter_name << "Ҳ�Ѳ�������" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << value_daughter_name << "��" << value_father_name << "�����˹��������" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "��Ƭ�ο�ʼ�ĵط�" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "�Լ�ȴ����Ȼһ��" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "�����ּ�������ϣ�̧ͷ�������" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "ȴ���ֳ����׵�����" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "�����Լ���ֿ��˵���Ļ�" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "-����վ������֮��" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "-����һ�������������㣬һ����ǰ������" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "-���˾�����̫��" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "-���޷���" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "-Ҳֻ�����ǹ¶�" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "��л�ɣ�" << value_daughter_name << "�뵽" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "����������һ��վ�ڸߴ�" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "�ҵ�һ��" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "Ҳ������˰�...." << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "��Ϸ����" << endl;
	//cin >> value_choice;
	cout << "\n\n" << endl;
	cout << "�����������" << endl;
	//cin >> value_choice;
	cout << "\n\n" << endl;
	cout << "��л��һֱ���" << value_daughter_name << endl;
	cout << "��Ϊ����" << value_daughter_name << "Ҳ��ò��ٹµ�" << endl;
	cout << "Ը���������ټ�" << endl;
	cout << "\n" << endl;
	cout << "ʱ�����������龴��" << endl;
	return 0;
}

