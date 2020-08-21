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
	//父亲的名字
	string value_father_name;
	//女儿的姓名
	string value_daughter_name;
	//女儿生日月份
	int value_birth_month;
	//女儿的生日日期
	int value_birth_date;
	//女儿的星座
	string value_daughter_constell;
	//女儿的五项基本信息
	string value_daughter_baseinfo;
	//五项基本信息录入
	vector<int> value_vec_baseinfo;
	//五项基本信息录入数组录入
	int value_array[5];
	//五项基本信息属性名
	array<string, 5> value_array_baseinfo_names = { "体力","智力","魅力","气质","敏捷" };
	//金钱基本属性
	int value_baseinfo_money = 100;
	//零花钱基本属性
	int value_baseinfo_pocket_money = 1000;
	//当前体力上限
	int value_baseinfo_hp = 60;
	//当前魔力上线
	int value_baseinfo_mp = 60;
	//统计能力值表格参数
	int value_shape_baseinfo;
	//统计金钱值表格参数
	int value_shape_money;
	//判断关键字
	int value_choice;
	//城市基本名称
	vector<string> value_city = { "人族的城镇","精灵的城镇","矮人的城镇","亡灵的城镇","龙族的城镇" };
	//消耗品基本名称
	array<string, 20> value_baseinof_items;
	//防具基本名称
	array<string, 40> value_baseinof_equipment_armor;
	//武器基本名称
	array<int, 20> value_baseinof_equipment_weapon;
	//经验值系统
	int value_baseinof_experience;
	//判断最终达成
	int finally_achievement = 0;
	int finally_money = 0;

	string constell_names[12][2]
	{
		{"摩羯座","水瓶座"},//一月
		{"水瓶座","双鱼座"},//二月
		{"双鱼座","白羊座"},//三月
		{"白羊座","金牛座"},//四月
		{"金牛座","双子座"},//五月
		{"双子座","巨蟹座"},//六月
		{"巨蟹座","狮子座"},//七月
		{"狮子座","处女座"},//八月
		{"处女座","天秤座"},//九月
		{"天秤座","天蝎座"},//十月
		{"天蝎座","射手座"},//十一月
		{"射手座","摩羯座"},//十二月

	};
	int constell_dates[]{ 20,19,21,20,21,22,23,23,23,24,23,22 };




	//输入父亲的姓名
	cout << "输入父亲的姓名" << endl;
	cin >> value_father_name;
	//输入女儿的姓名
	cout << "输入女儿的姓名" << endl;
	cin >> value_daughter_name;
	//输入女儿的生日日期
	cout << "输入女儿的生日日期" << endl;
	cin >> value_birth_month >> value_birth_date;

	value_daughter_constell = constell_names[value_birth_month - 1]
		[value_birth_date / constell_dates[value_birth_month - 1]];

	cout << "女儿的信息为：" << endl;
	cout << "姓名" << value_daughter_name << endl;
	cout << "生日：1885-" << value_birth_month << "-" << value_birth_date << endl;
	cout << "星座：" << value_daughter_constell << endl;


	//每个星座的不同属性
	if (value_daughter_constell == "白羊座")
	{
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(18);
		value_vec_baseinfo.push_back(20);
		value_vec_baseinfo.push_back(16);
		value_vec_baseinfo.push_back(13);
	}
	else if (value_daughter_constell == "金牛座")
	{
		value_vec_baseinfo.push_back(10);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(14);
		value_vec_baseinfo.push_back(17);
		value_vec_baseinfo.push_back(14);
	}
	else if (value_daughter_constell == "双子座")
	{
		value_vec_baseinfo.push_back(16);
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(19);
		value_vec_baseinfo.push_back(17);
		value_vec_baseinfo.push_back(14);
	}
	else if (value_daughter_constell == "巨蟹座")
	{
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(19);
		value_vec_baseinfo.push_back(16);
		value_vec_baseinfo.push_back(19);
		value_vec_baseinfo.push_back(13);
	}
	else if (value_daughter_constell == "白羊座")
	{
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(17);
		value_vec_baseinfo.push_back(18);
	}
	else if (value_daughter_constell == "狮子座")
	{
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(16);
		value_vec_baseinfo.push_back(14);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(13);
	}
	else if (value_daughter_constell == "处女座")
	{
		value_vec_baseinfo.push_back(12);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(19);
		value_vec_baseinfo.push_back(16);
		value_vec_baseinfo.push_back(13);
	}
	else if (value_daughter_constell == "天秤座")
	{
		value_vec_baseinfo.push_back(12);
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(17);
		value_vec_baseinfo.push_back(19);
	}
	else if (value_daughter_constell == "天蝎座")
	{
		value_vec_baseinfo.push_back(19);
		value_vec_baseinfo.push_back(10);
		value_vec_baseinfo.push_back(11);
		value_vec_baseinfo.push_back(11);
		value_vec_baseinfo.push_back(18);
	}
	else if (value_daughter_constell == "射手座")
	{
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(15);
	}
	else if (value_daughter_constell == "摩羯座")
	{
		value_vec_baseinfo.push_back(18);
		value_vec_baseinfo.push_back(17);
		value_vec_baseinfo.push_back(10);
		value_vec_baseinfo.push_back(14);
		value_vec_baseinfo.push_back(16);
	}
	else if (value_daughter_constell == "水瓶座")
	{
		value_vec_baseinfo.push_back(14);
		value_vec_baseinfo.push_back(18);
		value_vec_baseinfo.push_back(13);
		value_vec_baseinfo.push_back(14);
		value_vec_baseinfo.push_back(17);
	}
	else if (value_daughter_constell == "双鱼座")
	{
		value_vec_baseinfo.push_back(17);
		value_vec_baseinfo.push_back(12);
		value_vec_baseinfo.push_back(15);
		value_vec_baseinfo.push_back(20);
		value_vec_baseinfo.push_back(14);
	}

	/*if (value_daughter_constell == "白羊座") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "金牛座") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "双子座") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "巨蟹座") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "狮子座") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "处女座") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "天秤座") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "天蝎座") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "射手座") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "摩羯座") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "水瓶座") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	else if (value_daughter_constell == "双鱼座") {
		value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ; value_array[] = ;
	}
	*/


	//游戏开始于欧洲的魔法时代
	//这是一个强者的时代，有能力的人才有资格活下去
	//在1686年的某一天，将生下来一个孩子
	//请开启你的人生吧！

	//备用音乐
	//PlaySound(TEXT("E:\\AnyThingAboutGame\\music\\可惜没如果.wav"), NULL, SND_ASYNC | SND_NODEFAULT);

	//播放各个场景所用音乐
	mciSendString(_T("open \"F:\games\\林俊杰 - 可惜没如果.wav\" alias file"), NULL, 0, NULL);
	mciSendString(_T("play file"), NULL, 0, NULL);



	//开始剧情

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
	cout << "这个世界........" << endl;
	Sleep(3000);
	cout << endl;
	cout << "真的只有人类自己吗.........." << endl;
	Sleep(2000);
	cout << endl;
	cout << "这片大陆的名字叫尼柯大陆，处在欧洲最北部，数百万年前，这片大陆还是存在着龙这种生物，人类与龙相安无事，各自生活着，" << endl;
	Sleep(2000);
	cout << endl;
	cout << "但人类中的少数人认为龙的力量太过强大，早晚有一天龙会统治他们，由于恐惧龙的力量，一部分人说服当时统治者，" << endl;
	Sleep(2000);
	cout << endl;
	cout << "人们集结智慧，开采了可以克制龙力量的毓泰京石制作成武器，发动了最为浩大的伐龙行动，整场战斗整整持续了百年之久，" << endl;
	Sleep(2000);
	cout << endl;
	cout << "最终人类所剩无几，而所有的龙几乎全被消灭，人类欢呼雀跃，用了当时统治者的名字尼柯命名这片大陆......" << endl;
	Sleep(2000);
	cout << endl;
	cout << "斗转星移，时至今日，尼柯大陆早已和欧洲其他大陆一样，人类自由的生活着，完全不知道这片大陆曾经有过龙的痕迹" << endl;
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
	cout << "我的一生..." << endl;
	Sleep(2000);
	cout << endl;
	cout << "..." << endl;
	Sleep(2000);
	cout << endl;
	cout << "就此结束了吧...." << endl;
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
	cout << "慢慢的你睁开了眼睛.." << endl;
	Sleep(2000);
	cout << endl;
	cout << "你在一个屋子里醒了过了，壁炉的火把房间烤的很暖，一个面容慈善的人正看着你，" << endl;
	Sleep(2000);
	cout << endl;
	cout << "见你醒了，他问到：“你应该是人族的吧，怎么在森林里晕倒了？”" << endl;
	Sleep(2000);
	cout << endl;
	cout << "我....." << endl;
	Sleep(2000);
	cout << endl;
	cout << "你看了看对面的墙" << endl;
	Sleep(2000);
	cout << endl;
	cout << "... ..." << endl;
	Sleep(2000);
	cout << endl;
	cout << "长久以来，人族一直由皇宫所统治，但不满意皇宫统治的教廷势力一直想借机推翻皇宫的统治，甚至不惜借用亡灵族的魔法" << endl;
	Sleep(2000);
	cout << endl;
	cout << "，尽管这样，教廷势力还是落败了，之后皇宫为了巩固统治，开始通缉所有教廷势力以及与教廷有关的人，" << endl;
	Sleep(2000);
	cout << endl;
	cout << "你父亲因为曾经救治过一个传教士而被处以绞刑，你因为年龄的原因逃过刽子手的刀，但却收到村民的排挤甚至攻击，" << endl;
	Sleep(2000);
	cout << endl;
	cout << "你挣扎的逃亡森林，希望找一处僻静地方安静的死去……接着，你就晕了过去... ..." << endl;
	Sleep(2000);
	cout << endl;
	cout << "不要想太多了，那个人的问话打断了你沉痛的回忆；" << endl;
	Sleep(2000);
	cout << endl;
	cout << "你叫什么名字？" << endl;
	cout << "我? 我叫...." << endl;
	cout << "你想告诉他自己的名字，但却回想不起来......" << endl;
	Sleep(2000);
	cout << endl;
	cout << "......" << endl;
	Sleep(2000);
	cout << endl;
	cout << "那人好像看出来你的窘迫" << endl;
	cout << "不想在以前的回忆里活下去的话，给自己其一个新的名字吧" << endl;
	//女儿名字
	cout << "真是个好名字" << endl;
	cout << "你也是人族吗？你问道。" << endl;
	Sleep(2000);
	cout << endl;
	cout << "“恩，我也是人族，我是——（玩家选择），以后，你就跟着我吧。”" << endl;
	cout << "于是，你开始了一段全新的生活" << endl;
	cout << "... ..." << endl;



	cout << "真是个好名字" << "我的名字是" << endl;
	//加女儿名字
	cout << "我这里正好还缺一个打扫卫生的人，如果你不介意的话，可以留下来" << endl;
	cout << "你心里清楚，这个人救下了性命" << "" << endl;

	cout << "你也没在说什么，机械性的点了点头" << endl;


	//身世选择，根据选择判断增加能力值

	cout << "现在开始选择你的信息" << "\n(请慎重选择，这将会影响你的剧情发展)" << endl;

	cout << "直面人生！只有一次机会！" << "\n(按1继续...)" << endl;

	cin >> value_choice;

	cout << "你出生在一个什么家庭:\n1.上等的贵族家庭\n2.郊外的牧羊家庭\n3.城里的富商家庭\n4.宫廷的守卫家庭" << endl;
	cin >> value_choice;
	switch (value_choice)
	{
	case 1:
		for (int i = 0; i < 5; i++)
		{
			value_vec_baseinfo[i] += 15;

		}
		cout << "一场意外使得你的家庭没落，父母不知所踪，而你也流离在外...." << "这场意外可能是:" << endl;
		cout << "1.意外的火灾" << endl << "2.国王的降罪" << endl;
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
		cout << "原本你们过着平凡且幸福的生活，然而你们的父亲外出牧羊再也没回来，你的母亲也思念过度不幸离世，"
			<< "\n你父亲遇到的是:\n1.猛兽的袭击\n2.宫廷守卫的抓捕\n3.歹徒的袭击\n4.被困于某个地方" << endl;
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
		cout << "\n你的父亲白手起家，因为自身的天赋与不懈的努力终于在商界崭露头角"
			<< "\n当然，这是外面的说法"
			<< "\n事实上，你的父亲虽然是白手起家，但是却有着不少的\"朋友\""
			<< "\n你的父亲和这群朋友表面上做的是在正常不过的商品"
			<< "\n而实际上你父亲做的是某种致幻药物，有一天，你像往常一样去叫你父亲吃饭..."
			<< "\n结果发现你父亲在自己的卧室早已没了呼吸...."
			<< "\n你父亲出事的原因可能是:\n1.\"朋友\"的背叛\n2.竞争对手的恶性竞争\n3.杀手的偷袭\n4.某位不怀好意的顾客投毒"
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
		cout << "\n你的父亲是一位宫廷守卫，因此你得以出入城堡，小时候你也经常向你的朋友炫耀这点"
			<< "\n不过某一天你的父亲突然被抓到了大牢，你很意外，但还是每天去给你父亲送饭"
			<< "\n这一天，你去送饭时发现你父亲已经死在了牢里"
			<< "\n你整理父亲的遗物时发现你父亲竟然在密谋叛变，这个消息令你很震惊"
			<< "\n你父亲的死因可能是"
			<< "\n1.合谋者的暗杀\n2.为了叛变的进行你父亲选择自杀\n3.国王下令秘密处死你父亲\n4.大牢温度太高，你父亲适应不了"
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
			//什么么都没有发生，以后再说吧
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



	cout << "遇到强大的敌人，你希望\n1.勇敢的直面敌人！\n2.小心为上，从远处攻击。" << endl;
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







	//游戏主程序
	//随机算法，用来增加游戏属性
	srand(time(NULL));

	for (int year = 1659; year <= 1660; year++)
	{
		for (int month = (year == 1894) ? value_birth_month : 1; month <= 12; month++)
		{
			int random = rand() % 11;

			//判断当前的血量和魔法上限 
			value_baseinfo_hp += (int)(value_vec_baseinfo[0] * 1.5);
			value_baseinfo_mp += (int)(value_vec_baseinfo[1] * 1.8);

			//判断女儿的生日
			if (month == value_birth_month)
			{
				cout << "\n" << "\n" << "\n" << endl;
				cout << "今天是女儿" << value_daughter_name << "的生日" << endl;
				cout << "要不要为女儿的生日庆祝一下" << endl;
				cout << "\n1.庆祝生日\n2.不庆祝生日" << endl;
				cin >> value_choice;
				if (value_choice == 1)
				{
					cout << "给女儿买了很漂亮的小裙子," << value_daughter_name << "很开心" << endl;
					for (int i = 0; i < 5; i++)
					{
						value_vec_baseinfo[i] += random * 4 + 5;
						cout << value_array_baseinfo_names[i] << "增加了:" << random * 2 + 8 << endl;
					}
					value_baseinfo_money += random - 35;
					cout << "金钱增加了" << random - 35 << endl;
				}

			}
			//显示女儿的基本信息
			cout << "\n1.查看状态\n2.安排行程\n3.亲自谈话\n4.要零花钱\n5.去商店\n6.存档" << endl;

			cin >> value_choice;
			switch (value_choice)
			{
			case 1://查看当前状态
				cout << "女儿姓名:" << value_daughter_name << endl;
				cout << "女儿的生日:" << value_birth_month << "月" << value_birth_date << endl;
				cout << "女儿的星座:" << value_daughter_constell << endl;
				cout << "体力上限:" << value_baseinfo_hp << endl;
				cout << "魔力上限:" << value_baseinfo_mp << endl;
				cout << "现有金钱:" << value_baseinfo_money << endl;
				cout << "当前时间:" << year << "-" << month << endl;
				cout << left << endl;
				for (int i = 0; i < 5; i++)
				{
					cout << value_array_baseinfo_names[i] << ": " << setw(4) << value_vec_baseinfo[i];
					value_shape_baseinfo = value_vec_baseinfo[i] / 25;
					value_shape_money = value_baseinfo_money / 35;
					for (int i = 1; i <= value_shape_baseinfo; i++)
					{
						cout << "■";
					}
					for (int i = 1; i <= 30 - value_shape_baseinfo; i++)
					{
						cout << "□";
					}
					cout << endl;
				}
				cout << left;
				cout << "金钱" << ": " << setw(4) << value_baseinfo_money;
				for (int i = 1; i <= value_shape_money; i++)
				{
					cout << "■";
				}
				for (int i = 1; i <= 30 - value_shape_money; i++)
				{
					cout << "□";
				}
				month--;
				cout << endl;
				break;

			case 2://安排行程,每个月最多安排三次行程
				for (int i = 1; i < 4; i++) {
					cout << "\n1.拜师学艺\n2.上学读书\n3.栽培花朵\n4.学习礼仪\n5.研习茶道\n6.出城磨砺\n7.进城打工..." << endl;
					cin >> value_choice;
					if (value_baseinfo_money <= 10 && value_choice != 6)
					{
						cout << "你的金钱不足，只能进城打工" << endl;
						cout << "进城打工..." << endl;
						if (random >= 9)
						{
							cout << "运气很好" << endl;
							cout << "遇到了很大方的客人和老板，赚了很多钱" << endl;
							value_baseinfo_money += random * 5 + 28;
							cout << "金钱增加" << random * 5 + 28 << endl;
						}
						else
						{
							cout << "打工赚钱" << endl;
							value_baseinfo_money += random * 5 + 15;
							cout << "金钱增加" << random * 5 + 15 << endl;
						}
					}
					else
					{
						switch (value_choice)
						{
						case 1: //上学增加体力更多
							if (random >= 9)
							{
								cout << "运气很好" << endl;
								cout << "遇到了很有名的师傅" << endl;
								cout << value_array_baseinfo_names[0] << "增加了:" << random * 3 + 3 << endl;
								value_vec_baseinfo[0] += random * 3 + 3;

								for (int i = 1; i < 5; i++)
								{
									value_vec_baseinfo[i] += random * 2;
									cout << value_array_baseinfo_names[i] << "增加了:" << random * 2 << endl;
								}
								cout << "金钱减少" << random * 2 << endl;
								value_baseinfo_money -= random * 2;
							}
							else
							{
								cout << "任务完成！" << endl;
								cout << value_array_baseinfo_names[0] << "增加了:" << random * 2 << endl;
								value_vec_baseinfo[0] += random * 2;
								for (int i = 1; i < 5; i++)
								{
									value_vec_baseinfo[i] += random;
									cout << value_array_baseinfo_names[i] << "增加了:" << random << endl;
								}
								cout << "金钱减少" << random * 2 << endl;
								value_baseinfo_money -= random * 2;
							}
							break;
						case 2://上学读书增加智力更多
							if (random >= 9)
							{
								cout << "遇见了一个看起来神秘的老人在卖书" << endl;
								cout << "以很贵的价格买了几本书" << endl;
								cout << value_array_baseinfo_names[1] << "增加了:" << random * 3 + 4 << endl;
								value_vec_baseinfo[1] += random * 3 + 4;

								for (int i = 0; i < 5; i++)
								{
									if (i != 1)
									{
										value_vec_baseinfo[i] += random * 2;
										cout << value_array_baseinfo_names[i] << "增加了:" << random * 2 << endl;
									}
								}
								cout << "金钱减少" << random * 4 + 3 << endl;
								value_baseinfo_money -= random * 4 + 3;
							}
							else
							{
								cout << "任务完成！" << endl;
								cout << value_array_baseinfo_names[1] << "增加了:" << random * 2 << endl;
								value_vec_baseinfo[1] += random * 2;

								for (int i = 0; i < 5; i++)
								{
									if (i != 1)
									{
										value_vec_baseinfo[i] += random;
										cout << value_array_baseinfo_names[i] << "增加了:" << random << endl;
									}
								}
								cout << "金钱减少" << random * 2 << endl;
								value_baseinfo_money -= random * 2;
							}
							break;
						case 3://栽培花朵增加魅力更多
							if (random >= 9) {
								cout << "遇见了能够欣赏你悉心培育花朵的美丽的绅士" << endl;
								cout << "绅士对你的花朵赞不绝口，并告诉了你很多培植技术" << endl;
								cout << value_array_baseinfo_names[2] << "增加了:" << random * 3 << endl;
								value_vec_baseinfo[2] += random * 3;
								cout << endl;
								for (int i = 0; i < 5; i++)
								{
									if (i != 2)
									{
										value_vec_baseinfo[i] += random;
										cout << value_array_baseinfo_names[i] << "增加了:" << random << endl;
									}
								}
								cout << "金钱减少" << random << endl;
								value_baseinfo_money -= random;
							}
							else {
								cout << "任务完成！" << endl;
								cout << value_array_baseinfo_names[2] << "增加了:" << random * 2 << endl;
								cout << "金钱减少" << random * 2 << endl;
								value_vec_baseinfo[2] += random * 2;
								cout << endl;
								for (int i = 0; i < 5; i++)
								{
									if (i != 2)
									{
										value_vec_baseinfo[i] += random;
										cout << value_array_baseinfo_names[i] << "增加了:" << random << endl;
									}
								}
								cout << "金钱减少" << random * 2 << endl;
								value_baseinfo_money -= random * 2;
							}
							break;
						case 4://学习礼仪增加气质
							cout << "任务完成！" << endl;
							cout << value_array_baseinfo_names[3] << "增加了:" << random * 2 << endl;
							value_vec_baseinfo[3] += random * 2;
							cout << endl;
							for (int i = 0; i < 5; i++)
							{
								if (i != 3)
								{
									value_vec_baseinfo[i] += random;
									cout << value_array_baseinfo_names[i] << "增加了:" << random << endl;
								}
							}
							cout << "金钱减少" << random * 2 << endl;
							value_baseinfo_money -= random * 2;
							break;
						case 5://研习茶道增加修养
							cout << "任务完成！" << endl;
							cout << value_array_baseinfo_names[4] << "增加了:" << random * 2 << endl;
							value_vec_baseinfo[4] += random * 2;
							cout << endl;
							for (int i = 0; i < 5; i++)
							{
								if (i != 4)
								{
									value_vec_baseinfo[i] += random;
									cout << value_array_baseinfo_names[i] << "增加了:" << random << endl;
								}
							}
							cout << "金钱减少" << random * 2 << endl;
							value_baseinfo_money -= random * 2;
							break;
						case 6:
							cout << "请选择城市" << endl;
							for (int i = 0; i < 4; i++)
							{
								cout << i + 1 << "." << value_city[i] << endl;
							}
							cin >> value_choice;
							switch (value_choice)
							{
							case 1:
								cout << "你来到了" << value_city[value_choice - 1] << endl;
								cout << "你想在这个城市里做什么" << endl;
								cout << "\n1.去酒馆\n2.到装备商店\n3.到药水商店\n4.外出磨砺"
									<< "\n5.寻找这个城镇的导师进行转职\6.随便逛逛" << endl;
								cin >> value_choice;
								switch (value_choice)
								{
								case 1:
									cout << "你来到了这个城市的名叫好与坏的酒馆" << endl;
									cout << "酒馆老板很热心地把你请了进去" << endl;
									cout << "这个酒馆只买两种名为好酒和坏酒的酒\n要来一杯吗？" << endl;
									cout << "\n1.来一杯好酒\n2.来一杯坏酒\n3.不了，谢谢" << endl;
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
										cout << "你什么也没说，面无表情的走了" << endl;
										break;
									}
									break;
								case 2:
									cout << "你看到了一家装备商店" << "\n店里装备琳琅满目" << "\n你走了进去" << endl;
									cout << "店主笑着将你迎了进去，并告诉你这家店出售所有种类的装备" << endl;
									cout << "你大致的看了看，发现装备虽然齐全，但属性都很一般，适合新手" << endl;
									cout << "要进去看一看吗\n1,进店看看\n2.不了谢谢" << endl;
									cin >> value_choice;
									switch (value_choice)
									{
									case 1:
										break;
									case 2:
										break;
									default:
										cout << "你什么也没说，面无表情的走了" << endl;
										break;
									}
									break;
								case 3:
									cout << "你看到了一家药水商店" << "\n店里药水种类繁多" << "\n你走了进去" << endl;
									cout << "店主笑着将你迎了进去，并告诉你这家店出售所有种类的装备" << endl;
									cout << "你大致的看了看，发现药水种类虽然很多，但药水品质都很一般，适合新手" << endl;
									cout << "要进去看一看吗\n1,进店看看\n2.不了谢谢" << endl;
									cin >> value_choice;
									switch (value_choice)
									{
									case 1:
										break;
									case 2:
										break;
									default:
										cout << "你什么也没说，面无表情的走了" << endl;
										break;
									}
									break;
								case 4:
									cout << "你早已知道此地有着非常丰富的怪物" << endl;
									cout << "当地的百姓对怪物深恶痛极\n斩杀怪物也能够去城镇领取赏金" << endl;
									cout << "你仔细的观察了一番地形及周围..." << endl;
									cout << "发现怪物都不是是十分的强力,适合新手" << endl;
									cout << "要去看看吗\n1.去森林磨砺！\n2.算了回城" << endl;
									cin >> value_choice;
									switch (value_choice)
									{
									case 1:
										break;
									case 2:
										break;
									default:
										cout << "你什么也没说，一言不发的回城了" << endl;
										break;
									}
									break;
								case 5:
									cout << "你花了很长时间来四处打探导师的行踪" << "\n终于得知了导师的住处" << endl;
									cout << "导师是一位很严厉的男人" << "\n他告诉你在这里可以选择成为" << endl;
									cout << "1.见习战士\n2.见习魔法师\n3.不了谢谢" << endl;
									cout << "要进行转职吗" << endl;
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
										cout << "你什么都没有说，离开了" << endl;
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
								cout << "你来到了" << value_city[value_choice] << endl;
								cout << "你想在这个城市里做什么" << endl;
								cout << "\n1.去酒馆\n2.到装备商店\n3.到药水商店\n4.外出磨砺"
									<< "\n5.寻找这个城镇的导师进行转职\6.随便逛逛" << endl;
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
								cout << "你来到了" << value_city[value_choice] << endl;
								cout << "你想在这个城市里做什么" << endl;
								cout << "\n1.去酒馆\n2.到装备商店\n3.到药水商店\n4.外出磨砺"
									<< "\n5.寻找这个城镇的导师进行转职\6.随便逛逛" << endl;
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
								cout << "你来到了" << value_city[value_choice] << endl;
								cout << "你想在这个城市里做什么" << endl;
								cout << "\n1.去酒馆\n2.到装备商店\n3.到药水商店\n4.外出磨砺"
									<< "\n5.寻找这个城镇的导师进行转职\6.随便逛逛" << endl;
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
						case 7://打工增加金钱
							if (random >= 9)
							{
								cout << "运气很好" << endl;
								cout << "遇到了很大方的客人和老板，赚了很多钱" << endl;
								value_baseinfo_money += random * 5 + 28;
								cout << "金钱增加" << random * 5 + 28 << endl;
							}
							else {
								cout << "打工赚钱" << endl;
								value_baseinfo_money += random * 5 + 15;
								cout << "金钱增加" << random * 5 + 15 << endl;
							}
							break;
						default:
							cout << "什么也没做" << endl;
							for (int i = 0; i < 5; i++)
							{
								value_vec_baseinfo[i] += random - 5;
								cout << value_array_baseinfo_names[i] << "增加了:" << random - 5 << endl;
							}
							value_baseinfo_money += random - 5;
							cout << "金钱增加了" << random - 5 << endl;
							break;
						}
					}

					break;
				}
				break;
			case 3:
				cout << "找" << value_daughter_name << "谈话" << endl;
				for (int i = 0; i < 5; i++)
				{
					value_vec_baseinfo[i] += random - 2;
					cout << value_array_baseinfo_names[i] << "增加了" << random - 2 << endl;
				}
				value_baseinfo_money += random - 2;
				cout << "金钱增加了" << random - 2 << endl;
				break;
			case 4:
				cout << "向父亲诉说苦恼" << endl;
				cout << value_father_name << "听了很心痛，给了一点零花钱" << endl;
				if (value_baseinfo_pocket_money > 0)
				{
					value_baseinfo_money += 125;
					value_baseinfo_pocket_money -= 125;
				}
				else
				{
					cout << value_father_name << "对你很不好意思的说" << "家里已经没有多余的钱了" << endl;
					cout << "今后就要靠你自己生活了" << endl;
					month++;
				}
				value_baseinfo_pocket_money += 25;
				break;
			case 5:
				cout << "要去:\n1.装备店\n2.药水商店" << endl;
				cin >> value_choice;
				switch (value_choice)
				{
				case 1:
					break;
				case 2:
					break;
				default:
					cout << "在店外面逛了逛什么也没做" << endl;
				}
				break;
			case 6:
				cout << "目前还尚未实现这个功能" << endl;
				cout << "敬请期待" << endl;
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
		cout << "你成为了" << endl;
	}
	else if (finally_achievement > 2500)
	{
		cout << "你成为了" << endl;
	}
	else if (finally_achievement > 2300)
	{
		cout << "你成为了" << endl;
	}
	else
	{
		cout << "你一无所成" << endl;
	}

	cout << "\n" << endl;
	cout << "主线完！" << endl;
	cout << "\n" << endl;
	cout << "(输入任意键以继续)" << endl;
	cin >> value_choice;
	cout << "过了多年以后...." << endl;
	//cin >> value_choice;
	cout << endl;
	cout << value_father_name << "已经渐渐老去..." << endl;
	//cin >> value_choice;
	cout << endl;
	cout << value_daughter_name << "也已不再年轻" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << value_daughter_name << "把" << value_father_name << "葬在了故乡的土地" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "那片梦开始的地方" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "自己却仍孑然一身" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "坐在林间的椅子上，抬头望望天空" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "却浮现出父亲的脸庞" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "回忆自己的挚友说过的话" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "-总是站在他人之上" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "-所以一个人做决定的你，一个人前进的你" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "-令人敬仰的太阳" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "-若无法企及" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "-也只不过是孤独" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "凋谢吧，" << value_daughter_name << "想到" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "就这样独自一人站在高处" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "我的一生" << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "也不过如此吧...." << endl;
	//cin >> value_choice;
	cout << endl;
	cout << "游戏结束" << endl;
	//cin >> value_choice;
	cout << "\n\n" << endl;
	cout << "按任意键继续" << endl;
	//cin >> value_choice;
	cout << "\n\n" << endl;
	cout << "感谢您一直陪伴" << value_daughter_name << endl;
	cout << "因为有您" << value_daughter_name << "也变得不再孤单" << endl;
	cout << "愿我们来世再见" << endl;
	cout << "\n" << endl;
	cout << "时光流年制作组敬上" << endl;
	return 0;
}

