// myFirst.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
int dte(int);
using namespace std;

int main()
{
	//using std::cout;
	//using std::cin;
	//using std::endl;
	cout << "come up and c++ me some time.";
	cout << endl;
	cout << "you wont regedit it again" << endl;
	int abc;
	cout << "��Ҫ���룺";
	cin >> abc;
	cin.get();
	cout << "�������ֵ�ǣ�" << abc << endl;
	abc = abc + 5;
	cout << "����ֵ��5���ǣ�" << abc << endl;
	int def = dte(abc + 20);
	cout << "���ú���������ۼ�1��Ϊ��" << def << endl;
	cin.get();
	return 0;
}

int dte(int abc)
{

	cout << "���ú��������Ϊ��" << abc << endl;
	abc++;
	return abc;
}

