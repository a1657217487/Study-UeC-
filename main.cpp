#include <iostream>
#include <windows.h>
#include "PlayerHpcompent.h"

using namespace std;

int main() 
{
	SetConsoleOutputCP(CP_UTF8);
	cout << "请输入数字选择进入的区域" << endl;
	cout << "1. 房间 2. 森林 3. 沙漠" << endl;
	int i = 0;
	cin >> i;
	switch (i)
	{
	case 1:
	{
		cout<<"你进入了房间。" << endl;
		break;
	}
	case 2:
	{
		cout << "你进入了森林。" << endl;
		break;
	}
	case 3:
	{
		cout << "你进入了沙漠。" << endl;
		break;
	}
	default:
		break;
	}
}