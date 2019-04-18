// myFirst.cpp : 定义控制台应用程序的入口点。
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
	cout << "我要输入：";
	cin >> abc;
	cin.get();
	cout << "我输入的值是：" << abc << endl;
	abc = abc + 5;
	cout << "输入值加5后是：" << abc << endl;
	int def = dte(abc + 20);
	cout << "调用函数后参数累加1后为：" << def << endl;
	cin.get();
	return 0;
}

int dte(int abc)
{

	cout << "调用函数后输出为：" << abc << endl;
	abc++;
	return abc;
}

